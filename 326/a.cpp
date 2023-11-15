#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y;
    cin >> X >> Y;

    if ((Y-X<=2 and Y-X>=0) or (X-Y<=3 and X-Y>=0)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
