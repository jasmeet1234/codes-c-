#include <iostream>
#include<conio.h>
using namespace std;
//friend function syntax : friend void _function name_ (_class name_ _name for friend function object_)//
class jas
{
	int side ;
	public:
		void get(int a);
		friend void area(jas ar);
	
}obj;
void jas::get(int a)
{
	side=a;
}
void area(jas ar)
{
int	sqa ;
	sqa=(ar.side)*(ar.side);
	cout<<"area="<<ends<<sqa;
	
}
int main()
{int j;
	cout<<"enter the side of square"<<endl;
	cin>>j;
	obj.get(j);
	area(obj);
	return 0;
}
