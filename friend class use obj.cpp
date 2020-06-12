#include <iostream>
using namespace std;
class jasmeet
{
	int  x,y;
	public:
		void get()
		{cout<<"enter the numbers"<<endl;
			cin>>x>>y;
		}
		friend class jasmeet1;
};
class jasmeet1
{ public:
	void get(jasmeet obj)
	{
		cout<<obj.x<<endl<<obj.y<<endl;
	}
};
int main()
{
jasmeet p1;
jasmeet1 p2;
p1.get();
p2.get(p1);
return 0;
}
