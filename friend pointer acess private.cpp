#include<iostream>
using namespace std;
class jasmeet
{
public:
jasmeet()
{
	cout<<"hello i am constructor bitch"<<endl;
	}	
	private:
		~jasmeet()
		{
			cout<<"bye i am destructor bitch"<<endl;
		}
		friend void fun(jasmeet*);
};
void fun(jasmeet *p)
{
	delete p;
	
}
int main()
{
	jasmeet *p1=new jasmeet;
	fun(p1);
	return 0;
}
