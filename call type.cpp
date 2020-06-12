#include  <iostream>
using namespace std;
int square1(int n)
{
	cout<<"address of n1 in square1() "<< &n<<endl;
	n *= n;
	return n;
}
void square2(int *n)
{
	cout<<"address of n2 in square 2() "<<n<<endl;
	*n *= *n;
}
void square3(int &n)
{
	cout<<"address of n3 in square3() "<<&n<<endl;
	n *= n;
}
void hello()
{
	int n1=8;
	cout<<"address of n1 in main() "<<&n1<<endl;
	cout<<"square of n1: "<<square1(n1)<<endl;
	cout<<"no change in n1: "<<n1<<endl;
	
	int n2=8;
	cout<<"address of n2 in main(): "<<&n2 <<endl;
	square2(&n2);
	cout<<"square of n2: "<<n2<<endl;
	cout<<"change reflected in n2:" <<n2<<endl;
	
	int n3=8;
	cout<<"address of n3 in main(): "<<&n3<<endl;
	square3(n3);
	cout<<"square of n3: "<<n3<<endl;
	cout<<"change reflected in n3: "<<n3<<endl;
}
int main()
{
	hello;
	return 0;
}
