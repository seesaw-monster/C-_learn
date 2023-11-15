#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while(true){
        int a = N/100;
        int b = N%100/10;
        int c = N%10;
        if (a*b==c){
            cout << N << endl;
            break;
        }
        N++;
    }
}
