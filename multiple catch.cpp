#include <iostream>
using namespace std;
int main()
{
	
	try
	{
		throw 10;
	}
	catch(int e)
	{
		cout<<e<<endl;
	}
	catch(char e)
	{
		cout<<e<<endl;
	}
	catch(double e)
	{
		cout<<e<<endl;
	}
	return 0;
}

