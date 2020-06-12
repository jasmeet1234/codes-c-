#include<iostream>
using namespace std;
class jasmeet
{
	int a,b;
	public:
		void display()
		{
			cout<<a<<endl<<b<<endl;
		}
		friend void get(jasmeet obj);
};
void get(jasmeet obj)
{cout<<"enter the numbers"<<endl;
cin>>obj.a>>obj.b;
obj.display();

	
}
int main()
{
	jasmeet obj;
	get(obj);
	return 0;
}
