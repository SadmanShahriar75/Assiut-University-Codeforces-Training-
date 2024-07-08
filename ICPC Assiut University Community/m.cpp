#include <iostream>
using namespace std;
int main(){
    char ascci;
    cin >> ascci;
    

    if (ascci >=97 && ascci <=122){
        cout << "ALPHA\n" << "IS SMALL";
    }
    
    else if (ascci >=65&& ascci<=90)
    {
      cout << "ALPHA\n" << "IS CAPITAL";
    }
    else{
      cout << "IS DIGIT";
    }
    
 

    return 0;
}