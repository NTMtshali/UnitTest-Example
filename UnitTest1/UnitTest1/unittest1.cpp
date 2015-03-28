#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\RootFinder\RootFinder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, 1);
			// TODO: Your test code here
		}

		TEST_METHOD(BasicTest)
		{
			CRootFinder rooter;
			Assert::AreEqual(
				//Expect value
				0.0,
				//Actuak value:
				rooter.SquareRoot(0.0),
				//Tolerence:
				0.01,
				//Message:
				L"Basic test failed",
				//Line number - used if ther is no PDB file:
				LINE_INFO());
		}

		TEST_METHOD(RangeTest)
		{
			CRootFinder rooter;
			for (double v = 1e-6; v < 1e6; v = v*3.2)
			{
				double actual = rooter.SquareRoot(v*v);
				Assert::AreEqual(v, actual, v / 1000);
			}
		}
			 //Verify that negative inputs throw an exception.
		TEST_METHOD(NegativeRangeTest)
		{
			wchar_t message[200];
			CRootFinder rooter;
			for (double v = -0.1; v > -3.0; v = v - 0.5)
			{
				try
				{		//Should raise an exception:
					double result = rooter.SquareRoot(v);

					_swprintf(message, L"No exception for input %g", v);
					Assert::Fail(message, LINE_INFO());
				}
				catch(out_of_range)
				{
					continue; //Correct exception.
				}
				catch (...)
				{
					_swprintf(message, L"Incorrect exception for %g", v);
					Assert::Fail(message, LINE_INFO());
				}
			}
		}
	};


}