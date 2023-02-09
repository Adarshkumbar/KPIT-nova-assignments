#include<cxxtest/TestSuite.h>
#include"calc.h"

class calcTestSuite:public CxxTest::TestSuite
{
    public:
        void testAddition()
        {
            Complex c1(2,4);
            Complex c2(3,6);
            Complex c3=c1+c2;
            Complex c4(5,10);
            bool status=(c3==c4)
            TS_ASSERT_EQUALS(status,true);
        }

     
};
