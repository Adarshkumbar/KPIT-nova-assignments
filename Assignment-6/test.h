#include "bitmap.h"
#include <cxxtest/TestSuite.h>

//Data records

data d11=
{
    {"SaleUnits", 17000},
    {"Price", 45000},
    {"Efficiency", 10},
    {"HorsePower", 140}

};

data d12 =
{
    {"SaleUnits", 10000},
    {"Price", 65000},
    {"Efficiency", 12},
    {"Horsepower", 160}

};

data d13 =
{
    {"SaleUnits", 20000},
    {"Price", 35000},
    {"Efficiency", 14},
    {"Horsepower", 155}

};

data d14 =
{
    {"SaleUnits", 17000},
    {"Price", 45000},
    {"Efficiency", 10},
    {"Horsepower", 140}

};


data d15 =
{
    {"SaleUnits", 21000},
    {"Price", 40000},
    {"Efficiency", -1},
    {"Horsepower", 145}

};

std::vector <data> records1 = {d11,d12,d13,d14,d15};

class SampleTestSuite : public CxxTest::TestSuite
{
    public:

        //Test AverageCarPrice functionality
        void testOne( void )
        {
            float ans = AverageCarPrice (records1);
            TS_ASSERT( ans == 46000 );
            TS_TRACE("testOne");
        }

        //Test MaxHorsePower functionality
        void testTwo( void )
        {
            int ans = MaxHorsepower (records1);
            TS_ASSERT( ans == 160 );
            TS_TRACE("testTwo");
        }

        //Test LowestEfficiency by passing all records
        void testThree( void )
        {
            int ans = FindLowestEfficiency(records1);
            TS_ASSERT( ans == 10 );
            TS_TRACE("testThree");
        }

    
    
};
