#include<cxxtest/TestSuite.h>
#include"bitmap.cpp"

class calcTestSuite:public CxxTest::TestSuite
{
	public:
		void testpush()
		{
			Stack<int> s1;
			s1.push(10);
			s1.push(20);
			int val=s1.pop();
			TS_ASSERT_EQUALS(val,20);
		}
		
		void testpop()
		{
			Stack<int> s1;
			s1.push(100);
			s1.push(200);
			int val=s1.pop();
			TS_ASSERT_EQUALS(val,200);
		}
		
		void testpeep()
		{
			Stack<int> s1;
			s1.push(101);
			s1.push(202);
			int val=s1.peep();
			TS_ASSERT_EQUALS(val,202);
		}
		
		void testisfull()
		{
			Stack<int> s1;
			for(int i=1; i<=5; i++)
				s1.push(i*10);
			
			bool status=s1.isfull();
			TS_ASSERT_EQUALS(status, true);
			
			Stack<int> s2;
			s2.push(123);
			status=s2.isfull();
			TS_ASSERT_EQUALS(status, false);
		}
		
		void testisempty()
		{
			Stack<int> s1;
			bool status=s1.isempty();
			TS_ASSERT_EQUALS(status, true);
			
			s1.push(101);
			status=s1.isempty();
			TS_ASSERT_EQUALS(status, false);
		}

		
};
