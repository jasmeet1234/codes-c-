#include <iostream>
using namespace std;
class jasmeet
{
	int x;
	public:
		void get()
		{
			cout<<"enter the number"<<endl;
			cin>>x;
		}
		void give()
		{
			cout<<x<<endl;
		}
		friend jasmeet operator ++(const jasmeet obj,int a);
		
};
 jasmeet operator ++( jasmeet obj,int a)
		{
			jasmeet objt;
			obj.x++;
			objt.x=obj.x;
			return objt;
		}
int main()
{
	jasmeet p1,p2;
	p1.get();

	p2=p1++;
	p2.give();
	return 0;
}
