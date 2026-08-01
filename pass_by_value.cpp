#include<iostream>
using namespace std;
class Book
{
	public:
		int price;
		void getdata()
		{
			cout<<"Enter Original Book Price";
			cin>>price;
		}
};
void updateprice(Book b)//pass by reference
{
	b.price=500;
	cout<<"inside function book price="<<b.price;
}
int main()
{
	Book b1;
	b1.getdata();
	updateprice(b1);
	cout<<"Outside function Actual book price="<<b1.price;
	return 0;
}
