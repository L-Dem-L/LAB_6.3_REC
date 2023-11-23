#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.3_REC/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod)
		{
			// Arrange
			const int size = 5;
			int arr[size] = { -1, 2, -3, 4, -5 };

			// Act
			int result = countNegativeElementsRecursive(arr, size, 0);

			// Assert
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestMethodT)
		{
			// Arrange
			std::vector<int> vec = { -1, 2, -3, 4, -5 };

			// Act
			int result = countNegativeElementsTRecursive(vec, 0);

			// Assert
			Assert::AreEqual(3, result);
		}
	};
}
