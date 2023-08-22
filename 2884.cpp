#include <iostream>
using namespace std;

int main (void){
    int hr, min;
    cin >> hr >> min;

    if (min < 45){
        if(hr == 0)
            hr = 24;
        hr--;
        min = 60 - (45 - min);
    }
    else
        min -= 45;
    
    cout << hr << " " << min;
}