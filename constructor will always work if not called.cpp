#include <iostream>
using namespace std;
class jasmeet
{
	public :
		jasmeet()
		{
			cout<<"hello"<<endl;
			
		}
};
class jas:public jasmeet
{
	
};
int main()
{
jas obj;
return 0;	
}


