#include <iostream>
#include<iomanip>
using namespace std;
class jasmeet
{
int uid;
char name[60];
char sub[2];
public:
void get()
{ int i;
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the uid"<<endl;
	cin>>uid;
	cout<<"enter the subjects"<<endl;
	for(i=0;i<2;i++)
	{
		cin>>sub[i];
	}
	 }
	 void put()
	 {int j;
	 	cout<<setw(10)<<name<<setw(10)<<uid<<setw(5)<<" ";
	 	for(j=0;j<2;j++)
	 	{
	 		cout<<setw(10)<<sub[j];
		 }
	 	
		  } 	
};
int main()
{int k;
	jasmeet s[60];
	int n;
	cout<<"enter the number of students you want to enter"<<endl;
	cin>>n;
	for(k=0;k<n;k++)
	{
		s[k].get();
	}
	for(k=0;k<n;k++)
	{
		s[k].put();
	}
	return 0;
}
