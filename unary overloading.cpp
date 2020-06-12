#include <iostream>
using namespace std;
class jasmeet
{
	int x;
	int y;
	public:
		jasmeet(int x=0, int y=0):x{x},y{y}{}
	
		jasmeet operator *(const jasmeet &obj)
		{jasmeet objt;
			 objt.x=x*obj.x;
		objt.y=y*obj.y;
		return objt;
			
			}
	void display()
	{
		cout<<x<<endl<<y;
		}	
	
};
int main()
{
	jasmeet p1(1,2);
	jasmeet p2(3,4);
	
	jasmeet p3= p1*p2;
	p3.display();
	return 0;
}
