#include <iostream>
using namespace std;
class jasmeet
{
int x,y;
public:
	jasmeet(int x=0,int y=0)
	{
		
		this->x=x;
		this->y=y;
	}
	jasmeet(jasmeet &obj )
	{
		x=obj.x;
		y=obj.y;
	}
	void display()
	{
		cout<<x<<endl<<y<<endl;
	}
};
int main()
{
	jasmeet p1(1,2);
	jasmeet p2(p1);
	p1.display();
	p2.display();
	return 0;
}
