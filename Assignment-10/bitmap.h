#include<vector>
#include<algorithm>
using namespace std;

class Laptop
{
	int lid;
	char make[20];
	double cost;
public:
	Laptop();
	Laptop(int, const char*, double);
	int GetLid();
	char* GetMake();
	double GetCost();
	void Display();
};

class LaptopStore
{
	vector<Laptop> vect_laptop;
public:
	void InsertLaptop(Laptop);
	void SortLaptops();
	vector<Laptop> GetVect_Laptop();
	Laptop GetMinCostLaptop();
	Laptop GetMaxCostLaptop();
	void ShowLaptops();	
};
