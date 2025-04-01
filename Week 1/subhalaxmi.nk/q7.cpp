#include <iostream>
using namespace std;
int main()
{
    int n,num=1,i,j,;
    cout << "enter a number:";
    cin >> n;
    for(i==0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>0)
            {
                cout << "*";
            }
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
