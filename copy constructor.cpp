#include <iostream>
#include <conio.h>
using namespace std;
class jasmeet
{
	int x,y;
	public:
		jasmeet (int x1,int y1)
		{
			x=x1;
			y=y1;
		}
		jasmeet ( const jasmeet  &p2)
		{
			x=p2.x;
			y=p2.y;
		}
		void put()
		{
			cout<<x<<ends;
			cout<<y<<endl;
			
		}
};
int main()
{
	int x3,y3;
	cout<<"enter the value of x and y"<<endl;
	cin>>x3>>y3;
	jasmeet p1(x3,y3);
	jasmeet p2=p1;
p1.put();p2.put();
	return 0;
}
