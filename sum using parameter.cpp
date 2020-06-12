#include <iostream>
using namespace std;
class jasmeet
{
int x,y;
public:
 jasmeet ()
 {
 	x=0;
 	y=0;
	 }	
	 jasmeet (int x,int y)
	 {
	 	this->x=x;
	 	this->y=y;
	 }
	 jasmeet sum(const jasmeet &obj )
	 {
	 	jasmeet objt;
	 	objt.x=x+obj.x;
	 	objt.y=y+obj.y;
	 	return objt;
	 }
	 void display()
	 {
	 	cout<<x<<endl<<y<<endl;
	 	
	 }
};
int main()
{
int x1,y1;
cout<<"enter the numbers to be added"<<endl;
cin>>x1>>y1;
jasmeet p1(x1,y1);
cout<<"enter the other two"<<endl;

cin>>x1>>y1;
jasmeet p2(x1,y1);

	jasmeet p3=p1.sum(p2);
	p3.display();
	return 0;
}
