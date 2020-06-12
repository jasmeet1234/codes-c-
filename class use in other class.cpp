#include <iostream>
#include<string.h>
using namespace std;
class jasmeet
{
char name[40],sub[60]; 
int uid;
public:
jasmeet (char name[40],char sub[60])
{
	strcpy(this->name,name);
strcpy(	this->sub,sub);
uid=0;
	}	
	jasmeet (char name[40],char sub[60],int uid)
	{jasmeet::jasmeet(name,sub);
this->uid=uid;
	}
	void display()
	{
		cout<<"name:"<<ends<<name<<endl<<"subject:"<<ends<<sub<<endl<<"uid:"<<ends<<uid<<endl;	}
};
int main()
{
	jasmeet s1("jasmeet","programming");
	jasmeet s2("havneet","programming",19330);
	s1.display();
	s2.display();
	return 0;
}
