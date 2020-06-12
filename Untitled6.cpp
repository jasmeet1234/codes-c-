#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *p=new(nothrow) int();
	int *q= NULL;
	q= new int;
	if((!p)||(!q))
	{
		cout<<"bad memory"<<endl;
	}
	else
	{
		cout<<"enter the two number"<<endl;
		cin>>*p>>*q;
		cout<<"you entered: "<<*p<<ends<<*q<<endl;
	}
	delete p;
	delete q;
	int *array= new int[3];
	cout<<"enetr the numbers of array"<<endl;
	for(int j=0;j<3;j++)
	{
	cin>>(array[j]);
		
	}
	cout<<"you entered"<<endl;
	for(int k=0;k<3;k++)
	{
		cout<<setw(10)<<(array[k]);
	}
	return 0;
	
}
