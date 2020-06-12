#include<iostream>
using namespace std;
class jasmeet
{public :
	
	int fun(int a)
	{
		return a;
	}
	double fun(double a)
	{
		return a;
	}
	int fun(int a, int b)
	{
		return a,b;
	}
}obj;
int main()
{
	cout<<obj.fun(1)<<endl;
	cout<<obj.fun(1.999)<<endl;
	cout<<obj.fun(1,2);
	return 0;
}
