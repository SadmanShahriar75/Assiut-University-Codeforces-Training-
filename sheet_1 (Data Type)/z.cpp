#include <iostream>
using namespace std;
#include <cmath>
int main(){
    double a, b, c, d ;
    cin >> a >> b >> c >> d;
    
    double res = b * log(a);
    double res2 = d * log(c);

    cout << res << endl ;
    cout << res2 << endl ;

    if (res > res2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;

    }
    return 0;
}