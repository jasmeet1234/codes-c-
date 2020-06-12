#include<iostream>
using namespace std;
class jasmeet
{
	int a;
	public:
	class jasmeet1
	{
		int b;
		public:
		class jasmeet2;
	};
		
	
	
};
class jasmeet::jasmeet1::jasmeet2
{
	int c;
	public:
	void get(jasmeet obj)
	{
		cout<<"enter the number "<<endl;
		cin>>obj.a;
	
		cout<<obj.a<<endl;
		
	}
};
int main()
{
	jasmeet p1;jasmeet::jasmeet1 p2; jasmeet::jasmeet1::jasmeet2 p3;
	p3.get(p1);return 0;
}
