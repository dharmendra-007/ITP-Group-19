#include <iostream>
using namespace std;
void pattern(int n){
    cout << "enter a number:";
    cin >> n;
    int num=1,i,j;
    for(i=1i<=n;i++){
        for(j=0;j<n+i-1;j++){ 
            cout << num++;
            if(j<n+i-2) cout << "*";
        }
        cout << endl;
        num=num-(n+i-1)+i;
        pattern(n);
        return 0;
    }
}