//cpp for a friend function 
#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
		int y;
	void display()
	{
		x=10;
		y=20;
		cout<<"I am inside disp() member function of the class";
	}
	friend void add(Demo d);
	
};
void add(Demo d)
{
	d.x=10;
	d.y=20;
	cout<<"Addition X+Y="<<d.x+d.y;
}
int main()
{
	Demo ob;
	add(ob);
	return 0;
}
