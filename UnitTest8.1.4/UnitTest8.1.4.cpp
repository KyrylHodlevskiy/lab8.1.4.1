#include "pch.h" 

#include "CppUnitTest.h" 

#include "C:\Users\Pavilion\Desktop\Універ\Алгоритмізація та програмування\Лабораторна 8.1\4 спосіб\lab8.1.4\lab8.1.4\lab8.1.4.cpp"     



using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest1

{

    TEST_CLASS(UnitTest1)

    {

    public:



        TEST_METHOD(TestMethod1)

        {

             int R = Count("TESTQQQ","Q");

            Assert::AreEqual(3, R);

        }

    };

}
