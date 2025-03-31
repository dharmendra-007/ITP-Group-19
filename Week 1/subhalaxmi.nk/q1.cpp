#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%3==0)
        std::cout << "Fizz" << endl;
        else if(i%5==0)
        std::cout << "Buzz" << endl;
        else if(i%3==0 && i%5==0)
        std::cout << "FizzBuzz" <<i endl;
        else
          cout << i << endl;
    }
    return 0;

}