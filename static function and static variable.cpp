#include <iostream>
#include <conio.h>
using namespace std;
class jas
{

public:
static int a;
public:
	static int get()
	{
		cout<<a;
		return 0;
	}
} m;
int jas::a=5;
int main()
{
	jas::get();
	return 0;
}
