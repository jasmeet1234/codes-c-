#include<iostream>
using namespace std;
class jasmeet
{
	public:
		jasmeet()
		{
			cout<<"hello"<<endl;
		}
		~jasmeet()
		{
			cout<<endl<<"bye"<<endl;
		}		
};
int main()
{
	jasmeet *obj= new jasmeet;
	delete obj;// or delete(obj);//
	return 0;
}
