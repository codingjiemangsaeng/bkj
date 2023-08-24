#include <iostream>
using namespace std;

int main(){
    char c;
    int chrset[26] = {0,};
    int i_max = 0;
    int v_max = 0;

    int idx = 0;
    while(cin >> c){
        if (c > 64 && c < 91)
            idx = c-65;
        else if (c > 96 && c < 123)
            idx = c-97;
        chrset[idx]++;

        if(chrset[idx]>v_max){
            v_max = chrset[idx];
            i_max = idx;
        }
    }
    
    for(int i = 0; i < 26; i++){
        if(chrset[i] == v_max && i != i_max){
            cout << "?";
            return 0;
        }
    }
    
    char o = i_max + 65;
    cout << o;
}