
#include <iostream>
using namespace std;


class jasmeet
{
	int number;
	public:
		void get(int n);
		friend void fun(jasmeet objf);
}objc;


void jasmeet::get(int n)
{
	number=n;
}


void fun(jasmeet objf)
{
	if(objf.number%2==0)
	{
		cout<<"it is divisible by 2"<<endl;
	}
	else{
		cout<<"it is not divisible by 2"<<endl;
	}
}


int main()
{
int no;
cout<<"enter the number you want to check dicvisibility"<<endl;
cin>>no;
objc.get(no);
fun(objc);
return 0	;
}
