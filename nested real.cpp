#include <iostream>
#include <conio.h>
using namespace std;
class hen
{public:
	int id;
	void display()
	{
		cout<<"this is a hen"<<endl;
	}
	class nest
	{public:
		int size;
	void	display1()
		{
			cout<<"this is a nest "<<endl;
		}
		class egg
		{
			public :
				int number;
		void display2()
				{ 
					cout<<"this is a egg";
				}
				
		};
		
	};
};
int main()
{
	hen obj;
	hen::nest obj1;
	hen::nest::egg obj2;
	obj.display();
	obj1.display1();
	obj2.display2();
	return 0;
}
