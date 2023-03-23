#include<cxxtest/TestSuite.h>
#include"bitmap.cpp"

class calcTestSuite:public CxxTest::TestSuite
{
	public:
		void testinsert()
		{
			Queue<int> q1;
			q1.insert(10);
			q1.insert(20);
			int val=q1.remove();
			TS_ASSERT_EQUALS(val,10);
		}
		
		void testremove()
		{
			Queue<int> q1;
			q1.insert(10);
			q1.insert(20);
			int val=q1.remove();
			TS_ASSERT_EQUALS(val,10);
		}
		
		
		void testisfull()
		{
			Queue<int> q1;
			for(int i=1; i<=5; i++)
				q1.insert(i*10);
			
			bool status=q1.isfull();
			TS_ASSERT_EQUALS(status, true);
			
			Queue<int> q2;
			q2.insert(123);
			status=q2.isfull();
			TS_ASSERT_EQUALS(status, false);
		}
		
		void testisempty()
		{
			Queue<int> q1;
			bool status=q1.isempty();
			TS_ASSERT_EQUALS(status, true);
			
			q1.insert(101);
			status=q1.isempty();
			TS_ASSERT_EQUALS(status, false);
		}

		
};
