#include <iostream>
using namespace std;

int main (void){
    int hr, min, c_time;
    cin >> hr >> min >> c_time;

    hr += (min + c_time % 60) / 60;
    hr += c_time / 60;
    hr %= 24;
    min = (min + c_time % 60) % 60;
    
    cout << hr << " " << min;
}