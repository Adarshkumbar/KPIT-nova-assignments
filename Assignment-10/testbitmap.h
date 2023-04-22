#include<cxxtest/TestSuite.h>
#include"bitmap.h"

class TestEmployeeClasses:public CxxTest::TestSuite
{
	public:
		void testSortLaptops()
		{
			LaptopStore ls;
			ls.InsertLaptop(Laptop(1,"hp",50000));
			ls.InsertLaptop(Laptop(2,"apple",60000));
			ls.InsertLaptop(Laptop(3,"dell",55000));
			ls.SortLaptops();
			vector<Laptop> v=ls.GetVect_Laptop();
			TS_ASSERT_EQUALS(v[0].GetCost(),50000);
			TS_ASSERT_EQUALS(v[1].GetCost(),55000);
			TS_ASSERT_EQUALS(v[2].GetCost(),60000);
		}
		
		void testMinCostLaptop()
		{
			LaptopStore ls;
			ls.InsertLaptop(Laptop(1,"hp",50000));
			ls.InsertLaptop(Laptop(2,"apple",60000));
			ls.InsertLaptop(Laptop(3,"dell",55000));
			Laptop l=ls.GetMinCostLaptop();
			TS_ASSERT_EQUALS(l.GetCost(),50000);
		}
		
		void testMaxCostLaptop()
		{
			LaptopStore ls;
			ls.InsertLaptop(Laptop(1,"hp",50000));
			ls.InsertLaptop(Laptop(2,"apple",60000));
			ls.InsertLaptop(Laptop(3,"dell",55000));
			Laptop l=ls.GetMaxCostLaptop();
			TS_ASSERT_EQUALS(l.GetCost(),60000);
		}
};
