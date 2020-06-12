#include<iostream>
using namespace std;
int main()
{
	int  *p;
	p=NULL;
	p=new int;
	if(!p)
	{
		cout<<"not valid";
	}
	else{
		int n;
		cout<<"enter the number"<<endl;
		cin>>*p;
		cout<<"you entered : "<<*p;
	}
	delete p;
}
