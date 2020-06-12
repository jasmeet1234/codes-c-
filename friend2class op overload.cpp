#include<iostream>
using namespace std;
class jasmeet1;
class jasmeet
{
	int a;
	public:
		void get()
		{
			cin>>a;
		}
		friend void operator<(jasmeet obj,jasmeet1 obj1);
};
class jasmeet1
{
int b;
public:
void get()
{
	cin>>b;
	}	
	friend void operator<(jasmeet obj,jasmeet1 obj1);
};
void operator <(jasmeet obj,jasmeet1 obj1)
{
if(obj.a>obj1.b) cout<<obj.a<<ends<<"is bigger"<<endl;
else cout<<obj1.b<<ends<<"is bigger"<<endl;
}
int main()
{
	jasmeet p1;jasmeet1 p2;
	p1.get();p2.get();
	p1<p2;
	return 0;
}
