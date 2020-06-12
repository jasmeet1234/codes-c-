#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 10;
	
		cout<<"jamseet"<<endl;
	}

	catch(int x)
	{
		cout<<"ans:"<<ends<<x<<endl;
	}
		try
	{
			throw "jas";
	}
	catch(char const y[30])
	{
		cout<<"ans:"<<ends<<y<<endl;
	}
	return 0;
}
