#include <iostream>
#include<conio.h>
using namespace std;
class jas
{private:
	static int a;
	static int b;
	int c;
	public:
	static int change();
	int get()
	{c=10;
		cout<<"c=="<<c<<endl;
		return 0;
	}
}hav;
	int jas::a=10;
	int jas::b=11;
	int jas::change()
	{cout<<"a="<<a<<endl<<"b="<<b<<endl;
		int d;
		d=b;
		b=a;
		a=d;
		cout<<"a="<<a<<endl<<"b="<<b<<endl;
		return 0;
	}
int main()
{
	hav.get();
	jas::change();
	return 0;
}
