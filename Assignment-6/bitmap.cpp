#include "bitmap.h"

//Data values

data d1 =
{
    {"SaleUnits", 17000},
    {"Price", 45000},
    {"Efficiency", 10},
    {"HorsePower", 140}

};

data d2 =
{
    {"SaleUnits", 10000},
    {"Price", 65000},
    {"Efficiency", 12},
    {"HorsePower", 160}

};

data d3 =
{
    {"SaleUnits", 20000},
    {"Price", 35000},
    {"Efficiency", 14},
    {"HorsePower", 155}

};

data d4 =
{
    {"SaleUnits", 17000},
    {"Price", 45000},
    {"Efficiency", 10},
    {"HorsePower", 140}

};


data d5 =
{
    {"SaleUnits", 21000},
    {"Price", 40000},
    {"Efficiency", -1},
    {"HorsePower", 145}

};


//insert data values to vector for convenient processing    
std::vector <data> records = {d1,d2,d3,d4,d5};

/*
    To find the Average Price, apply this logic

        i) Loop over vector of values.
        ii)For every record
            a) Look for 'Price' key.
            b) If found, check if Price is invalid (set to -1)
            c) If a valid Price is found, add to total.
        iii)Find the average based on total and record size.

*/

float AverageCarPrice(std::vector<data>& values){
    
    
    int Price;
    int Total=0;
    int counter=0;

    data d1;
    /*
        Loop and find the Price key. If it exists, check if Price is not 
        set to -1. Add to total if Price value is valid.
    */
    int Length = values.size();
    
    for(int index=0;index < Length; index++){
        
       
    }

    return round(Total/counter);
}

/*
    To find the Maximum Horsepower Price, apply this logic

        i) Loop over the vector of values.
        ii)For every record
            a) Look for the 'Horsepower' key.
            b) If found, check if Price is invalid (set to -1)
            c) If a valid value is found, compare to see if it is higher than current value. Update where applicable.
*/

int MaxHorsepower(std::vector<data>& values){
    
    int MaxPower=0;
    int Power=0;
    data d1;

    int Length = values.size();
    
    for(int index=0;index < Length; index++){
        
        
    }

    //return highest value found
    return MaxPower;
}


/*
    To find lowest efficiency, apply this logic

        i) Loop over vector of values.
        ii)For every record
            a) Look for 'efficiency' key.
            b) If found, check if efficiency is invalid (set to -1)
            c) If a valid value is found, compare to see if it is lower than current value. Update where applicable.
*/

int FindLowestEfficiency(std::vector<data>& values){
    int LowestEfficiency=100;
    int efficiency=-1;
    data d1;
   
    int Length = values.size();

    /*
        Loop and find Efficiency key. If it exists, check if Efficiency is not
        less than current value of LowestEfficiency. Replace if a lower value is found
    */

    for(int index=0;index < Length; index++){
        
        
     
    }

    return LowestEfficiency;
}