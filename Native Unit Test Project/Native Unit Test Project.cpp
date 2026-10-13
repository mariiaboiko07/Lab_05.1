#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTestProject
{
	TEST_CLASS(NativeUnitTestProject)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 0.0;
			double y = 0.0;

			double expected = 0.0;
			double actual = k(x, y);

			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}