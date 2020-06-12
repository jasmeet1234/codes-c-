#include<iostream>
using namespace std;
int main()
{
	int *p;
	p= new(nothrow) int();
	if(!p)
	{
		cout<<"bad memory allocation"<<endl;
	}
	else
	{ 
	*p=110;
	cout<<"the value is:  "<<*p;
	}
	return 0;
}
