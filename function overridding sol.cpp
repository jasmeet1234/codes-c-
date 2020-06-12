#include <iostream>
using namespace std;
class jasmeet
{ public:
	void show()
	{
		cout<<"jasmeet"<<endl;
		
	}
};
class havneet:public jasmeet
{public:
void show ()
{
	cout<<"havneet"<<endl;
	jasmeet::show();
}
}obj;
int main()
{
	obj.show();
	return 0;
}
