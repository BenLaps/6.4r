#include "pch.h"
#include "CppUnitTest.h"
#include "../6.4r/6.4r.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L = NULL;
			Insert1(L, 1);
			Insert1(L, 2);
			Change1(L);

			Assert::AreEqual(L->info , 2);
			Assert::AreEqual(L->link->info , 1);
		}
	};
}
