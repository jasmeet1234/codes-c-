#include <iostream>
using namespace std;
class jasmeet
{
	int a;
	int b;
	public:
		jasmeet (int x,int y)
		{
			a=x;
			b=y;
		}
		void get()
		{
			cout<<a;
			cout<<endl<<b<<endl;
		}
};
int main()
{
	
	jasmeet pi(10,11);
	pi.get();
	jasmeet p2(11,12);
	p2.get();
	return 0;
}
