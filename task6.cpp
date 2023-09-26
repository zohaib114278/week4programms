#include<iostream>
using namespace std;
void score(int number);
int main()
{
	int number;
	cout<<"Enter your score: ";
	cin>>number;
	score(number);
}
void score(int number)
{
	if(number>50)
	cout<<"Pass";
	if(number<50)
	cout<<"Fail";
}