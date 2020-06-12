#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"test 1"<<endl;
		try
		{
			cout<<"test 2"<<endl;
			throw 10;
		}
		catch(int x)
		{
			cout<<x<<ends<<"was thrown by test 2"<<endl<<"by the way i am catch 1"<<endl;
			throw 20;
		}
	}
	catch(int y)
	{
		cout<<y<<ends<<"was thrown by catch 1"<<endl<<"by the way i am catch 2"<<endl;
		
	}
	return 0;
}
