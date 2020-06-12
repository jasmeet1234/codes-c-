#include <iostream>
using namespace std;
class jasmeet
{
	int a,b;
	public:
		jasmeet(int x,int y)
		{
			a=x;b=y;
		}
		jasmeet()
		{
			a=0;b=0;
		}
		void get()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	int p,q;
	cin>>p>>q;
	jasmeet p1(p,q);
	p1.get();
	return 0;
}
