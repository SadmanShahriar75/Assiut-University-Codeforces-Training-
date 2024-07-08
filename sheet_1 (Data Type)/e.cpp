

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R, p, Area;
    p =  3.141592653;
    cin >> R;
    Area = p * (R * R);
    cout << fixed << setprecision(9) << Area << endl;
    return 0;
}
