#include <iostream>
#include <algorithm>
using namespace std;

int main (void){
    int dice [7] = {};
    int roll[3];

    cin >> roll[0] >> roll[1] >> roll[2];
    for (int i = 0; i < 3; i++)
        dice[0] = max(dice[0], ++dice[roll[i]]);
    
    int big = 6;
    while(dice[0] != dice[big])
        big--;
    
    if(dice[0] == 1)
        cout << 100 * big;
    else if(dice[0] == 2)
        cout << 1000 + 100 * big;
    else
        cout << 10000 + 1000 * big;
}