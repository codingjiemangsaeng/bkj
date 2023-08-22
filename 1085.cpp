#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int xtw, yth;
    xtw = abs(x-w);
    yth = abs(y-h);
    cout<< min(min(x,xtw),min(y,yth));
}