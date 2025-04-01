#include<iostream>
#include <cmath>
using namespace std;
int main (){
    int num;
    cout << "enter a mumber:";
    cin >> num;
    int root = sqrt(num);
    if(root*root==num)
     cout << num << "is a perfect square" << endl;
     else
     cout << num << "is not a perfect square" << endl;
     return 0;
    
}