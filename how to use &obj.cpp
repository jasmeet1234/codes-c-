#include<iostream>
using namespace std;
class jasmeet 
{
	int a;
	public:
		void get()
		{
			cout<<"enter the number"<<endl;
			cin>>a;
		}
		jasmeet big(const jasmeet &obj)
		{
			if(a>obj.a)
			{
				cout<<a<<ends<<"is bigger "<<endl;
			}
			else
			{
				cout<<obj.a<<ends<<"is bigger"<<endl;
			}
		}
};
int main()
{
	jasmeet p1,p2;
	p1.get();
	p2.get();
	p1.big(p2);
	return 0;
}
