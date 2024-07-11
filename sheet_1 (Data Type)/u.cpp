


#include <iostream>
using namespace std;

int main() {
    double double_num;
    cin >> double_num;
    int int_num = double_num;
    double result = double_num - int_num;
   if (result !=0){
    cout << "float " << int_num << " " <<  result << endl ;
   }
   else{
    cout << "int " << int_num << endl ;
   }
    return 0;
}