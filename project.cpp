#include <iostream>
using namespace std;
class jasmeet
{private:
	static int number;
	static int number1;
	public:
		static int get(int g,int g1);
		friend int function(jasmeet fun);
		int get1(int g2);
}obj;
int jasmeet::get(int g,int g1)
{
	number=g;
	number1=g1;
	return 0;
}
int jasmeet::get1(int g1)
{
 int thx(g1);
 return 0;
}
int function(jasmeet fun)
{int flag;
	if(fun.number1>fun.number)
	{
		cout<<"2nd number is greater"<<endl;
		flag=1;
	}
	else if(fun.number>fun.number1)
	{
		cout<<"1st number is greater"<<endl;
		flag=2;
	}
	else if(fun.number1==fun.number)
	{
		cout<<"both numbers are equal"<<endl;
		flag=3;
	}
	fun.get1(flag);
	return 0;
}

inline int thx(int i)
{
	if(i==1)
	{
		cout<<"good"<<endl;
	}
	else if(i==2)
	{
		cout<<"good"<<endl;;
	}
	else if(i==3)
	{
		cout<<"are you dumb amigo"<<endl;
	}
	return 0;
}
int main()
{
	int n1,n2;
	cout<<"enter the numbers you wanna compare"<<endl;
	cin>>n1>>n2;
	obj.get(n1,n2);
	function(obj);
	return 0;
}
