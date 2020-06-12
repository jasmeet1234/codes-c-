#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=NULL;
	p=new int();
	if(!p)
	{
		cout<<"not valid"<<endl;
	}
	else{
		cout<<"enter the number to store"<<endl;
		int n;
		cin>>n;
		p=&n;
		cout<<"you entered : "<<*p<<endl;
	}
	return 0;
}
