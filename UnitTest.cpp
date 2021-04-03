#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3d/Vector3d_public.h"
#include "C:\Users\Софія\source\repos\lab3.3d\lab3.3d\Vector3d_public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad o(2, 3, 1), c(2, 2, 2);
			Vector3d_public a(o), b(c);
			Assert::AreEqual(a * b, 12);
		}
	};
}
