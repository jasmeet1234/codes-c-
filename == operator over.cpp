#include <iostream>
using namespace std;
class jasmeet
{
int a;
public:
void get()
{
	cout<<"enter the number "<<endl;
	cin>>a;
	}	
 void operator ==(jasmeet obj)
 {
 	if(a==obj.a) cout<<"they are equal"<<endl;
 	else cout<<"they are not equal"<<endl;
 }
};
int main()
{
	jasmeet p1,p2;
	p1.get();
	p2.get();
	p1==p2;
	return 0;
}
