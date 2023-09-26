#include<iostream>
using namespace std;
void converter(float inches);
int main()
{
	float inches;
	cout<<"Enter the measurement in inchs: ";
	cin>>inches;
	converter(inches);
}
void converter(float inches)
{
	float feets;
	feets=inches/12;
	cout<<"Equivalent in feet: "<<feets;	
}