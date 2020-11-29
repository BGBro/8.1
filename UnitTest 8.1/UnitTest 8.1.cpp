#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1/8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = Count(",,,");
			Assert::AreEqual(t, 2);
		}
	};
}
