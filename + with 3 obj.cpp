#include <iostream>
using namespace std;
class jasmeet
{
	int x,y,z;
	public:
		void get()
		{
			cout<<"enter the number"<<endl;
			cin>>x>>y>>z;
			
		}
		void give()
{
	cout<<x<<endl<<y<<endl<<z<<endl;
}
jasmeet operator +(const jasmeet &obj)
{
	jasmeet objt;
	objt.x=x+obj.x;
	objt.y=y+obj.y;
	objt.z=z+obj.z;
	return objt;
	
}

};
int main()
{
	jasmeet p1,p2,p3,p4;
	p1.get();p2.get();p3.get();
	p4=p1+p2;
	p4=p4+p3;
	p4.give();
	return 0;
}
