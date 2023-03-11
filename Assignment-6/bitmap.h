#ifndef BITMAP_H
#define BITMAP_H

#include<map>
#include<iostream>
#include<vector>
#include<cmath>

//type define the map to a data to avoid complicated declarations
typedef std::map<std::string,int> data;


//records will be assigned in bitmap.cpp file externally
extern std::vector <data>  records;


//Method to find Max Horsepower from available records
int MaxHorsepower(std::vector<data>& records);


//Method to find Average Car Price from available data
float AverageCarPrice(std::vector<data>& records);


//Method to find Lowest Efficiency amongst all models 

int FindLowestEfficiency(std::vector<data>& records);

#endif
