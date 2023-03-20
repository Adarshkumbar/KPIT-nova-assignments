#include "bitmap.h"

// Data values

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

// insert data values to vector for convenient processing
std::vector<data> records = {d1, d2, d3, d4, d5};

float AverageCarPrice(std::vector<data> &values)
{

    int Price;
    int Total = 0;
    int counter = 0;

    data d1;
    int Length = values.size();

    for (int i = 0; i < Length; i++)
    {
        d1 = values[i];
        if (d1["Price"] != -1)
        {
            Total += d1["Price"];
        }
        counter++;
    }

    return round(Total / counter);
}

int MaxHorsepower(std::vector<data> &values)
{

    int MaxPower = 0;
    int Power = 0;
    data d1;

    int Length = values.size();

    for (int i = 0; i < Length; i++)
    {
        d1 = values[i];
        if (d1["Horsepower"] != -1)
        {
            Power = d1["Horsepower"];
            if (Power > MaxPower)
                MaxPower = Power;
        }
    }

    // return highest value found
    return MaxPower;
}

int FindLowestEfficiency(std::vector<data> &values)
{
    int LowestEfficiency = 100;
    int efficiency = -1;
    data d1;

    int Length = values.size();

    for (int i = 0; i < Length; i++)
    {
        d1 = values[i];
        if (d1["Efficiency"] != -1)
        {
            efficiency = d1["Efficiency"];
            if (efficiency < LowestEfficiency)
                LowestEfficiency = efficiency;
        }
    }
    return LowestEfficiency;
}