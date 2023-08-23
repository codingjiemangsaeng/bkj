#include <iostream>
using namespace std;

int main(){
    int nots;
    cin >> nots;
    int bdg[nots][2];
    
    int idx = -1;
    while(cin>>bdg[++idx][1])
        cin>>bdg[idx][0];
    
    long long val;
    idx = -1;
    while(++idx != nots){
        val = 1;
        int c = min(bdg[idx][1], bdg[idx][0]-bdg[idx][1]);
        for (int i = 0;i < c; i++)
            val *= bdg[idx][0]--;
        for (int i = c; i > 1; i--)
            val /= i;
        cout << val << endl;
    }
}