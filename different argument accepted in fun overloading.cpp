#include <iostream>
using namespace std;
int fun(int a)
{
	return a;
}
char fun(char a)
{
	return a;
}
int main()
{
	cout<<fun(5);
	cout<<endl<<fun('a');
	return 0;
}
