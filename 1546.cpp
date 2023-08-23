#include <iostream>
using namespace std;

int main(void){
    int nots;
    cin >> nots;
    int tst[nots];
    int scr = 0;
    int idx = 0;
    int bst = 0;
    double tot = 0;

    while(cin >> scr){
        tst[idx++] = scr;
        bst = max(bst,scr);
        tot += scr;
    }
    
    cout << ((tot / nots) / bst)* 100;
}