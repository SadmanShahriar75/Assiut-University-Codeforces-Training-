#include <iostream>
using namespace std;
int main(){
    long long a, b, c, d ;
    cin >> a >> b >> c >> d;
    long long a1 = a % 100;
    long long b1 = b % 100;
    long long c1 = c % 100;
    long long d1 = d % 100;
    long long mul = a1 * b1 * c1 * d1;
    long long answer = mul % 100;
    if (answer < 10){
        cout << "0" << answer << endl;
    }
    else{
         cout << answer << endl;
    }


    return 0;
}