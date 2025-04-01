#include <iostream>
using namespace std;
int main()
{
    int i,num,dig,max=0;
    cout << "enter a number:";
    cin >> num;
    for(i=1;i!=0;i++)
    {
        dig=num%10;
        if(max<dig)
        {
            max==dig;
        }
        n/=10;
    }
    cout << " the largest digit in number is:";
    return 0;
}