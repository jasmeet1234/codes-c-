#include<iostream>
using namespace std;
class jasmeet
{
	public:
		int x;
};
class jasmeet1: virtual public jasmeet
{
	public:
		int y;
	
};
class jasmeet2: virtual public jasmeet
{
	public:
		int z;
};
class jasmeet3: public jasmeet1, public jasmeet2
{public:
	int sum;
	int get()
	{
		sum=x+y+z;
		return sum;
	}
}obj;
int main()
{
	cout<<"enter the value of three integers to be added"<<endl;
	cin>>obj.x>>obj.y>>obj.z;
	cout<<obj.get();
	return 0;
}
