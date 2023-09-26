#include<iostream>
using namespace std;
void fuel(float distance);
int main()
{	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuel(distance);
}
void fuel(float distance)
{
	double fuelNeeded;
	fuelNeeded=10*distance;
	cout<<"Fuel needd: "<<fuelNeeded;
	
	
}