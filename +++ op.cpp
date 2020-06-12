#include<iostream >
using namespace std;
class jasmeet
{
int a;
public:
jasmeet(int a=0)
{
	this->a=a;
}
void show()
{
	cout<<a<<endl;
}
void operator ++()
{
	a=++a;
	
}
};
int main()
{
	jasmeet p1(10);
	p1.show();
	++p1;
++p1;
	p1.show();
	return 0;
}
