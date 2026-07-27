//cpp for accessing specifiers
#include<iostream>
using namespace std;
class A
{
	private:
		int sno;
	protected:
		int pincode;
	public:
		int phoneno;
	
};
class B:private A{
};
int main()
{
	A a;
	a.phoneno=12345;
	cout << "phoneno: " << a.phoneno;
	return 0;
	
}
