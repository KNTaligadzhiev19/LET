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
		
		TEST_METHOD(MySumShouldReturnCorrectAnswerWithFourAndThree)
		{
			// AAA

			// Arrange
			int num = 4;
			int num1 = 3;

			// Act
			int actual = mySum(num, num1);

			// Assert
			Assert::AreEqual(7, actual);
		}
	};
}
