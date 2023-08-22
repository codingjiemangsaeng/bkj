#include <iostream>
using namespace std;
int main (void){
    int year;
    cin >> year;
    if (!(year % 400)){
        cout << "1";
        return (0);
    }    
    if(!(year % 4)){
        if(year % 100){
            cout << "1";
            return (0);
        }
    }
    cout << "0";
}