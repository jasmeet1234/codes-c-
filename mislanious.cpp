#include <iostream>
using namespace std;
class jasmeet{
	int x,y;
	public:
		void get (int x=0,int y=0)
		{this->x=x;
		this->y=y;
		
		}
		void give ()
		{
		cout<<x<<endl<<y<<endl;}
		jasmeet sum(jasmeet a)
		{
			jasmeet objt;
			objt.x=x+a.x;
			objt.y=y+a.y;
			return objt;
		}
};
int main()
{jasmeet p1,p2;
 p1.get(1,2);
 p2.get(1,2);
	jasmeet p3;
	p3=p1.sum(p2);
	p3.give();
	return 0;
	
}
