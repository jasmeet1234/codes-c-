#include <iostream>
#include <string>
using namespace std;
class employee{
	protected:
		string name;
		float payrate;
		public:
			employee(string name1, float payrate1 );
			string getname() const;
			float getpayrate() const;
			float pay(float hours) const;
		};
		employee::employee(string name1,float payrat1)
		{
			name=name1;
			payrate=payrat1;
		}
		string employee::getname() const
		{
			return name;
		}
		float employee::getpayrate() const
		{
			return payrate;
		}
		float employee::pay(float hours) const
		{
			return hours*payrate;
		}
		
		class manager:public employee
		{
			protected:
				bool salaried;
				public:
					manager(string name1,float payrate1,bool salaried1);
					bool getsalaried() const;
					float pay(float hours) const;
				};
				manager::manager(string name1,float payrate1, bool salaried1):employee(name1,payrate1)
				{ 
					salaried=salaried1;
					
				}
		bool manager::getsalaried() const
		{
			return salaried;
		}
		float manager::pay(float hours) const
		{
		if(salaried)
		
		return payrate;
		
		
		return employee::pay(hours);
	}
				
			int main()
			{
				employee emp1("havneet kaur",25.0);
				cout<<"name :"<<emp1.getname()<<endl;
				cout<<"pay:"<<emp1.pay(40.0)<<endl;
				manager mgr("jasmeet singh",12000.0,true);
				cout<<"name:"<<mgr.getname()<<endl;
				cout<<"pay:"<<mgr.pay(40.0)<<endl;
				cout<<"salaried "<<mgr.getsalaried()<<endl;
				return 0;
			}
		
