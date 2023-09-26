#include<iostream>
using namespace std;
void evenOdd(int numnber);
int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	evenOdd(number);
}
void evenOdd(int numnber)
{
	if(numnber%2==0)
	cout<<" Number "<< numnber <<" is even";
	if(numnber%2!=0)
	cout<<" Number "<< numnber <<"odd";
}