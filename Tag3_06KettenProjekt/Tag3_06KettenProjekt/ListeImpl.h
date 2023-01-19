#pragma once
#include "Liste.h"
#include "memory"
namespace vw {
	namespace collections {

		template<class T>
		class Kettenglied;
		
		template<class T>
		class ListeImpl : public Liste<T>
		{
		private:
			std::shared_ptr<Kettenglied<T>> start;
			std::shared_ptr<Kettenglied<T>> akt;
		public:

			ListeImpl()
			{
			}

			auto append(T value) -> void override
			{
				auto neu = std::make_shared<Kettenglied<T>>(value);
				if(is_empty())
				{
					start =neu;
				} else
				{
					this->move_last();
					neu->vor = akt;
					akt->nach = neu;
				}
				akt = neu;
			}
			auto get() -> T override
			{
				if(is_empty()) 	return T{};
				return akt->data;
			}
			auto remove() -> bool override // Bitte noch nicht
			{
				return false;
			}
			auto update(T newValue) -> bool override
			{
				if(is_empty()) 	return false;

				akt->data = newValue;

				return true;
			}
			auto move_first() -> bool override
			{
				if (is_empty()) return false;

				akt = start;

				return true;
			}
			auto move_last() -> bool override {
				if(is_empty()) return false;
				while (move_next())
				{
					// NOP OK
				}
				return true;
			}
			auto move_next() -> bool override {
				if(is_end_of_list()) return false;
				akt = akt->nach;
				return true;
			}
			auto move_previous() -> bool override {
				if (is_begin_of_list()) return false;
				akt = akt->vor.lock();
				return true;
			}
			auto is_empty() -> bool override {
				return akt.use_count() == 0;
			}
			auto is_end_of_list() -> bool override {
				return is_empty() || akt->nach.use_count() == 0;
			}
			auto is_begin_of_list() -> bool override {
				return is_empty() || akt->vor.expired();
			}


			auto clear() -> void override
			{
				start.reset();
				akt.reset();
			}
		};
		
		template<class T>
		class Kettenglied
		{
			friend class ListeImpl<T>;
			T data;
			std::shared_ptr<Kettenglied<T>> nach;
			std::weak_ptr<Kettenglied<T>> vor;

		public:
			Kettenglied(const T& data)
				: data(data)
			{
			}
		};
	}
}

