#include <iostream>
using namespace std;
class jasmeet
{
	int a;
	public:
		void get()
		{
			cout<<"enter the numbers"<<endl;
			cin>>a;
		}
		void display()
		{
			cout<<a<<endl;
		}
		friend jasmeet operator +(jasmeet obj, jasmeet obj1);
 };
 jasmeet operator +(jasmeet obj, jasmeet obj1)
 {
 	jasmeet objt;
 	objt.a=obj.a+obj1.a;
 	return objt;
 }
 int main()
 {
 	jasmeet p1,p2;
 	p1.get();
 	p2.get();
 	jasmeet p3=p1+p2;
 	p3.display();
 	return 0;
 }
