#pragma once

namespace vw {
	namespace collections {
		template<class T>
		class Liste
		{
		public:
			Liste() = default;
			virtual ~Liste() = default;

			virtual auto append(T value)->void = 0; // Macht methode abstrakt
			

			virtual auto get()->T = 0;
			

			virtual auto remove()->bool = 0;
			

			virtual auto update(T newValue)->bool = 0;

			virtual auto clear() ->void// Defaultmethoden
			{
				while (remove());
			}

			// Navigation

			virtual auto move_first() -> bool 
			{
				if (is_empty()) return false;

				while (move_previous())
				{
					// NOP OK
				}

				return true;
			}
			

			virtual auto move_last() -> bool  {
				if (is_empty()) return false;
				while (move_next())
				{
					// NOP OK
				}
				return true;
			}
			

			virtual auto move_next()-> bool = 0;
			

			virtual auto move_previous()-> bool = 0;
			

			// Status

			virtual auto is_empty()-> bool = 0;
			

			/// <summary>
			/// 
			/// </summary>
			/// <returns>true wenn liste leer oder cursor auf dem letzten steht</returns>
			virtual auto is_end_of_list()-> bool = 0;
			
			/// <summary>
			/// 
			/// </summary>
			/// <returns>true wenn liste leer oder cursor auf dem ersten steht</returns>
			virtual auto is_begin_of_list()-> bool = 0;
			


		};
	}
}

