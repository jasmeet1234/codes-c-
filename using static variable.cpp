#include <iostream>

using namespace std;
void count()
{

static int c=0;
cout<<++c;
}
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        count();
    }
    return 0;
}
