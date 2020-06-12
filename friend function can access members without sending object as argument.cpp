#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class jasmeet
{
	int a;
	public:
		friend int get();
}obj;
int get()
{
	cin>>obj.a;
	cout<<obj.a;
	return 0;
}
int main()
{
	get();
	return 0;
}
