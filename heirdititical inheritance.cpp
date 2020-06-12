	#include <iostream>
	using namespace std;
	class jasmeet
	{ public:
		jasmeet()
		{
			cout<<"jasmeet is best"<<endl;
		}
	};
	class jasmeet1:public jasmeet
	{ public:
		jasmeet1()
		{
			cout<<"yup he is best"<<endl;
		}
	}obj1;
	class jasmeet2 :public jasmeet
	{public:
		jasmeet2()
		{
			cout<<"no doubt" <<endl;
		}
	}obj2;
	int main()
	{
		return 0;
	}
