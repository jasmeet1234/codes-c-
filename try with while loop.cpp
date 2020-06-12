#include <iostream>
using namespace std;
int main()
{
	int pn,mn,flag;
	 char name[100];
while (!(flag==1))
{
	try
	{
		cout<<"name"<<endl;
		cin>>name;
		cout<<"physic"<<endl;
		cin>>pn;
		if(!((pn>=0)&&(pn<=100)))
		{
			throw pn;
		}
		cout<<"maths"<<endl;
		cin>>mn;
		if((!(mn>=0)&&(pn<=100)))
		{
			throw mn;
		}
		flag =1;
	}
	catch(int y)
	{
		cout<<"invalid number "<<endl;
		flag=0;
	}
}
return 0;
}
