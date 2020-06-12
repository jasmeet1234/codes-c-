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
		friend void fun(jasmeet p);
};
void fun(jasmeet p)
{
cout<<"hello";
	
}
int main()
{
	jasmeet p1;
	fun(p1);
	return 0;
}
