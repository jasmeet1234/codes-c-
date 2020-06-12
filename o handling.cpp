#include <iostream>
using namespace std;
int main()
{
	int a,b;
	try
{
	cout<<"enter the numbers "<<endl;
	cin>>a>>b;
	if(b==0)
	{
		throw 0;
	}
	cout<<"div:"<<endl<<a/b;
}
catch (int x)
{
	cout<<"not valid"<<endl;
}
return 0;
}
