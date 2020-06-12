#include <iostream>
using namespace std;
class jasmeet{
	int x;
	int y;
	public:
	void get()
	{
		cout<<"give"<<endl;
		cin>>x;
		cin>>y;
	}
		void give()
		{
			cout<<x<<endl<<y<<endl;
		}
		jasmeet operator +(const jasmeet obj)
		{
			jasmeet objt;
			objt.x=x+obj.x;
			objt.y=y+obj.y;
			return objt;
		}
		
};
int main()
{
jasmeet p1,p2,p3;
p1.get();
p2.get();
p3=p1+p2;
p3.give();
	return 0;
}

