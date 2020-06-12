#include <iostream>
#include<string.h>
using namespace std;
class jasmeet
{
	char a[100];
	public:
		void get()
		{
			cout<<"enter the string"<<endl;
			cin>>a;
					}
					void display()
					{
						cout<<a;
					}
					jasmeet operator +(jasmeet obj)
					{
						jasmeet objt;
						strcat(a,obj.a);
						strcat(objt.a,a);
						return objt;
						
					}
};
int main()
{
	jasmeet p1,p2,p3;
	p1.get();p2.get();
	p3=p1+p2;
	p3.display();
	return 0;
}
