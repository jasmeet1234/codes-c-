#include <iostream>
using namespace std;
class jasmeet
{
	int x;
	public:
	class jasmeet1
	{ public:
		int  get()
		{ jasmeet obj;
			cin>>obj.x;
			return obj.x;	
		}
	};
};
int main()
{
	jasmeet:: jasmeet1 obj1;
cout<<obj1.get();
return 0;
}
