#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3_REC/Lab6.3_REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63ITER
{
	TEST_CLASS(UnitTest63ITER)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int sum = 0;
			int t = sumA(arr, 2, sum, 0);
			Assert::AreEqual(sum, 2);
		}
	};
}
