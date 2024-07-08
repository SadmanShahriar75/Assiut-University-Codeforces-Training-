

#include <iostream>
using namespace std;
int main(){ 
    char ascci;
    cin >> ascci;
    

    if (ascci >=97 && ascci <=122){
        ascci-=32;
    }
    else{
        ascci+=32;
    }
    cout << ascci << endl;
    

    return 0;
}