#include<iostream>
#include<cstring>
#include<algorithm>
#include"bitmap.h"
using namespace std;
Laptop::Laptop()
{
	lid=0;
	strcpy(make," ");
	cost=0.0;
}

Laptop::Laptop(int id, const char *m, double c)
{
	lid=id;
	strcpy(make,m);
	cost=c;
}
	
int Laptop::GetLid()
{
	return lid;
}

char* Laptop::GetMake()
{
	return make;
}


double Laptop::GetCost()
{
	return cost;
}

void Laptop::Display()
{
	cout<<lid<<endl;
	cout<<make<<endl;
	cout<<cost<<endl;
}

void LaptopStore::InsertLaptop(Laptop l)
{
	vect_laptop.insert(vect_laptop.end(),l);
}

bool compare(Laptop l1, Laptop l2)
{
 	return l1.GetCost()<l2.GetCost();

}

void LaptopStore::SortLaptops()
{
	sort(vect_laptop.begin(),vect_laptop.end(),[]( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); });
}

vector<Laptop> LaptopStore::GetVect_Laptop()
{
	return vect_laptop;
}

Laptop LaptopStore::GetMinCostLaptop()
{
 	return min_element(vect_laptop.begin(), vect_laptop.end(), []( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); })[0];
}

Laptop LaptopStore::GetMaxCostLaptop()
{
 	return max_element(vect_laptop.begin(), vect_laptop.end(), []( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); })[0];
}
	
void LaptopStore::ShowLaptops()
{
	for(auto i=vect_laptop.begin();i!=vect_laptop.end();++i){
		i->Display();
	}
}