#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.5 ))/Rational.h"
#include "../lab 2.5 ))/Pair.h"
#include "../lab 2.5 ))/Rational.cpp"
#include "../lab 2.5 ))/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a;
			int t;
			t = a.Diff_2(1000, 7);
			Assert::AreEqual(t, 7000);
		}
	};
}
