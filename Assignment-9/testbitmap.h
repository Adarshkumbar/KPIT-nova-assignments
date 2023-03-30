#include<cxxtest/TestSuite.h>
#include"bitmap.h"

class TestEmployeeClasses:public CxxTest::TestSuite
{
public:
	void testWageEmployeeCalcNetSalary()
	{
		WageEmployee we1(123,"just",50000,10,5000);
		TS_ASSERT_EQUALS(we1.CalcNetSalary(),100000);
	}
	
	void testIsWageEmployeeTaxable()
	{
		WageEmployee we1(123,"just",50000,10,5000);
		TS_ASSERT_EQUALS(we1.IsTaxable(), false);
	}
	
	void testSalesPersonCalcNetSalary()
	{
		SalesPerson sp1(123,"just",50000,10,5000,500,1000);
		TS_ASSERT_EQUALS(sp1.CalcNetSalary(),600000);
	}
	
	void testIsSalesPersonTaxable()
	{
		SalesPerson sp1(123,"just",50000,10,5000,500,1000);
		TS_ASSERT_EQUALS(sp1.IsTaxable(), true);
	}
};







