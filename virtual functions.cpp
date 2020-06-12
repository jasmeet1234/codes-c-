#include<iostream>
using namespace std;
class jasmeet 
{
public:
int a;
	virtual void jas()
	{
cout<<"i am jas of base class"<<endl;		
	}
virtual	void jas1()
	{
		cout<<"i am jas1 of base class"<<endl;
	}
};
class jasmeet1:public jasmeet
{

	public:
void jas()
	{
		cout<<"i am jas of derived class"<<endl;
	}
	void jas1()
	{
		cout<<"i am jas1 of derived class"<<endl;
	}
};
int main()
{
	jasmeet p1;
	jasmeet *p;
		jasmeet1 p2;
	p=&p2;

	p->jas();
	p->jas1();
	p1.jas();
	p1.jas1();
	return 0;
}
