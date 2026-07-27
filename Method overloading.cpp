//cpp for method overloading

#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
double add(double a,double b)
{
	return a+b;
}
int main()
{
	cout<<"Addition of two numbers="<<add(10,20)<<endl;
	cout<<"Addition of two numbers="<<add(10,20,30)<<endl;
	cout<<"Addition of two numbers="<<add(2.3,8.0)<<endl;
	return 0;
}
