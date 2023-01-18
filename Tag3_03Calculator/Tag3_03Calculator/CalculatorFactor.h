#pragma once
#include <memory>
#include "Calculator.h"
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalcualtorSecure.h"
class CalculatorFactor
{

private:
	 static bool logger;
	 static bool secure;
public:

	 static bool is_logger() 
	 {
		 return logger;
	 }

	 static void set_logger(const bool logger)
	 {
		 CalculatorFactor::logger = logger;
	 }

	 static bool is_secured()
	 {
		 return secure;
	 }

	 static void set_secured(const bool secure)
	 {
		 CalculatorFactor::secure = secure;
	 }

	static std::unique_ptr<Calculator> createInstance()
	{
		std::unique_ptr<Calculator> result = std::make_unique<CalculatorImpl>();
		if(logger) result = std::make_unique<CalculatorLogger>(std::move(result));
		if (secure) result = std::make_unique<CalculatorSecure>(std::move(result));
		return result;
	}
};

