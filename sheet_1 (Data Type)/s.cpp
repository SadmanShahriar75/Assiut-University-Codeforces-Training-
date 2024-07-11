
#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num;
    if (num>=0 && num <=25.0){
        cout << "Interval [0,25]";
    }
    else if (num> 25.0 && num <=50.0){
        cout << "Interval (25,50]";
    }
    else if (num> 50.0 && num <=75.0){
        cout << "Interval (50,75]";
    }
    else if (num> 75.0 && num <=100.0){
        cout << "Interval (75,100]";
    }
    else{
        cout << "Out of Intervals";    
    }

    return 0;
}