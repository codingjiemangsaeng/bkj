#include <iostream>
using namespace std;

int main (){
    int num;
    cin >> num;
    int base [7] = {};
    int stick = 64;

    int idx = 0;
    while (num != 0 && stick != 0){
        if (num >= stick)
        {
            base[idx] = 1;
            num -= stick;
        }
        stick /= 2;
        idx++;
    }

    int cnt = 0;
    for (int i = 0; i < 7; i++)
    {
        if(base[i])
            cnt++;
    }
    cout << cnt;
}