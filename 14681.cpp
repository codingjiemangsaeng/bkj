#include <iostream>
using namespace std;

int main (void){
    int x, y;
    cin>>x;
    cin>>y;
    if(y>0){
        if(x>0){
            cout<< "1";
        }
        else
            cout<< "2";
    }
    else{
        if(x<0){
            cout<< "3";
        }
        else
            cout<< "4";
    }
}