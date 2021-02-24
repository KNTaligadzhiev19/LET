#include "pch.h"
#include "CppUnitTest.h"
#include "../LET/AnswerCheck.h"
#include "../LET/DisplayFunctions.h"
#include "../LET/Exercises.h"
#include "../LET/UsageOfEnglishTenses.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LETUnitTesting
{
	TEST_CLASS(LETUnitTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 4;
			int num1 = 3;
			Assert::AreEqual(7, fun(num, num1));
		}
	};
}
