#include <iostream>
#include <string>
using namespace std;

int main(){
    string cs,gr;
    double cr;
    double tot = 0;
    double toc = 0;
    double grade = 0;

    int idx = -1;
    while (++idx != 20){
        cin >> cs >> cr >> gr;
        if(gr == "P" || gr == "F"){
            if(gr == "F")
                toc += cr;
            continue;
        }
        grade = 1.0;
        if(gr[0] == 'A')
            grade += 3.0;
        else if(gr[0] == 'B')
            grade += 2.0;
        else if(gr[0] == 'C')
            grade += 1.0;
        
        if(gr[1] == '+')
            grade += 0.5;

        tot += cr * grade;
        toc += cr;
    }
    cout << tot / toc;
}