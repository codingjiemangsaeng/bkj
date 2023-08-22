#include <iostream>
using namespace std;

int main(void){
    int noc;
    cin >> noc;
    
    int ntc [noc][2];

    int tmp = 0;
    while (tmp != noc){
        cin >> ntc[tmp][0] >> ntc[tmp][1];
        tmp++;
    }

    tmp = 0;
    while (tmp != noc){
        cout << ntc[tmp][0] + ntc[tmp][1] << "\n";
        tmp++;
    }
}