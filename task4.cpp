#include<iostream>
using namespace std;
void sum(int a, int b);
void product(int a, int b);
void sub(int a, int b);
void division(int a, int b);
int main()
{
	int a;
	int b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	char choice;
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice=='+')
	{
	sum(a,b);	
	}
	if(choice=='*')
	{
	product(a,b);
	}
	if(choice=='-')
	{
	sub(a,b);
	}
	if(choice=='/')
	{
	division(a,b);
	}
}



void sum(int a, int b)
{	
	int sum=0;
	sum=a+b;
	cout<<"Sum is : "<<sum;
}

void product(int a, int b)
{
	int product;
	product=a*b;
	cout<<"Product: "<<product;
}

void sub(int a, int b)
{
	int sub;
	sub=a-b;
	cout<<"Subtraction: "<<sub;
}

void division(int a, int b)
{
	int division;
	division=a/b;
	cout<<"Division is:"<<division;
}