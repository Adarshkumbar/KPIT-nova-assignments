
#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:

    //Validate Engineering student object
    void testOne( void )
    {
        EngineeringStudent e1("John Smith", "EN101", 40,45);

        TS_ASSERT(e1.GetStudentName() == "John Smith");
        TS_ASSERT(e1.GetStudentId() == "EN101");
        TS_ASSERT(e1.GetTheoryMarks() == 40);
        TS_ASSERT(e1.GetPracticalMarks() == 45);
        
    }

    //validate Architecture student object
    void testTwo( void )
    {
        ArchitectureStudent ar1("Janet Watson", "AR101", 40,45);
        TS_ASSERT(ar1.GetStudentName() == "Janet Watson");
        TS_ASSERT(ar1.GetStudentId() == "AR101");
        TS_ASSERT(ar1.GetDesignMarks() == 40);
        TS_ASSERT(ar1.GetThesisMarks() == 45);
    }

    //Validate Calculate marks functionality for engineering student
    void testThree( void )
    {
        EngineeringStudent e1("John Smith", "EN101", 30,35);
        e1.CalculateMarks();
        TS_ASSERT(e1.GetTotalMarks() == 65);

    }

    //Validate Calculate marks functionality for architecture student
    void testFour( void )
    {
        ArchitectureStudent ar1("Janet Watson", "AR101", 40,45);
        ar1.CalculateMarks();
        TS_ASSERT(ar1.GetTotalMarks() == 85);
    }

    //validate calculate Grade functionality for Engineering Student
    void testFive( void )
    {
        EngineeringStudent e1("John Smith", "EN101", 30,35);
        e1.CalculateMarks();
        TS_ASSERT(e1.CalculateGrade() == 'A');
    }    
    
    //validate calculate Grade functionality for Architecture Student
    void testSix( void )
    {
        ArchitectureStudent ar1("Janet Watson", "AR101", 40,45);
        ar1.CalculateMarks();
        TS_ASSERT(ar1.CalculateGrade() == 'O');
    }
};
