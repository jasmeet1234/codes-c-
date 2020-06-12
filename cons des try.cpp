#include<iostream>
using namespace std;
class jasmeet
{
	public:
		jasmeet()
		{
			cout<<"rae madarchod mae constructor bolti"<<endl;
		}
		~jasmeet()
		{
			cout<<"arae budbak mae destructor hoti"<<endl;
		}
};
int main()
{
	try
	{
		cout<<"jada hi hawwa mae ud riya sae?"<<endl;
		jasmeet p1;
		throw 0;
		cout<<"meri to koyi nhi sunta whaaaaaaaaaaaaaa"<<endl;
	}
	catch(...)
	{
		cout<<"hui hui wo rana kidar bhagad mota bhai"<<endl;
	}
	return 0;
}
