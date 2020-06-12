#include<iostream>
#include <string>
using namespace std;
class jasmeet{
	int uid;
	string stu;
	public:
		void get()
		{
			cout<<"enter the uid and name"<<endl;
			cin>>uid>>stu;
		}
		void display()
		{
			cout<<uid<<endl<<stu;
		}
};
int main()
{
	jasmeet p1;
	jasmeet *pointer=&p1;
	pointer->get();
	pointer->display();
	return 0;
}
