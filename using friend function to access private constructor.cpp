#include <iostream>
using namespace std;
class jasmeet
{
	private:
		int x;
		private:
			jasmeet(int x1)
			{
				cout<<x1<<endl;
			}
			public:
				friend void get(int x3);

};
void get(int x3)
{
	jasmeet p1 (x3);
}
int main()
{
	int a;
	cout<<"enter the desired number"<<endl;
	cin>>a;
	get(a);
	return 0;
}
