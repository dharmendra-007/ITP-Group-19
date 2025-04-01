#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter three sides";
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b){
        if(a==b || b==c || a==c) cout << "Isosceles triangle";
    else if(a==b && b==c) cout << ""equilateral traingle";
    }
   { 
     else(a!=b || b!=c || c!=a) cout << "scalene triangle";
    }
     return 0;
    
 }