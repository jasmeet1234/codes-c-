#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"hello"<<endl;
		throw 10;
	}
	catch(... )
	{
		cout<<"helel";
	}
	return 0;
}
