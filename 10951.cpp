#include <iostream>
#include <list>
using namespace std;

int main(void){
    int n;
    list<int> ntc;
    
    while (cin >> n){
        ntc.push_back(n);
    }
    
    list<int>::iterator iter = ntc.begin();
    
    int a,b;
    while(ntc.size() != 0){
        a = *(iter++);
        ntc.pop_front();
        b = *(iter++);
        ntc.pop_front();
        cout << a+b << endl;
    }
}