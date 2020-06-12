#include<iostream>
using namespace std;
int fun()
{
	return 0;
}
int fun()
{
	return 0.1;
}
int main()
{
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	return 0;
}
