#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *array;
	array= new(nothrow) int[3];
	if(!array)
	{
		cout<<"not valid"<<endl;
	}
	else
	{ cout<<"enter the value for the array"<<endl;
		for(int i =0;i<3;i++)
		{
			cin>>array[i];
		}
		cout<<"you entered : "<<endl;
		for(int j=0;j<3;j++)
		{
			cout<<setw(5)<<array[j];
		}
	}
	return 0;
}
