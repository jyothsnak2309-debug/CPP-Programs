//C++ Program to Implement Book Management Using a Class
#include<iostream>
using namespace std;
class Book
{
	public:
		int sno;
		string bookname;
		string bookauthor;
	void issuebook()
	{
		cout<<"book is issued successsfully";
	}
	void returnbook()
	{
		cout<<"Book was successfully returned";
	}
};
int main()
{
	Book b1,b2;
	b1.sno=123;
	b1.bookname="c++";
	b1.bookauthor="Bjarne stroustrup";
	b1.issuebook();
	b2.bookname="c programming";
	b2.bookauthor="Dennis Ritchie";
	b2.returnbook();
	return 0;
}
