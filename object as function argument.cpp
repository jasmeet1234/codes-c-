#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class jasmeet
{
	private:
		string name;
		string subject;
		int uid;
		int number;
		public:
			void put(jasmeet obj1 );
}obj;
void jasmeet::put(jasmeet obj1)
{
	cout<<"enter the value as follows"<<endl<<"name,uid,subject,marks"<<endl;
	cin>>obj1.name;
	cin>>obj1.uid;
		cin>>obj1.subject;
		cin>>obj1.number;


	cout<<setw(10)<<setfill('*')<<"NAME"<<setw(10)<<"UID"<<setfill('*');
	cout<<endl;
	cout<<setw(10)<<setfill('*')<<obj1.name<<setw(10)<<obj1.uid<<setfill(' ');
	cout<<endl;
	cout<<setw(10)<<setfill('*')<<"SUBJECT"<<setw(10)<<"NUMBER"<<setfill(' ');
	cout<<endl;
	cout<<setw(10)<<setfill('*')<<obj1.subject<<setw(10)<<obj1.number<<setfill(' ' );
	cout<<endl;
	
}
int main()
{
	cout<<"enter the details"<<endl;
	obj.put(obj);
	return 0;
}
