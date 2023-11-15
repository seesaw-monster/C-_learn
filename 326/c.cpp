#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i=0;i<N;i++){
        cin >> A.at(i);
    }
    sort(A.begin(), A.end());

    int best_x=-1, best_c=0;
    for (int i=0;i<N;i++){
        int c = 0;
        int x = A.at(i);
        if (best_x==x){
            continue;
        }
        for (int j=i;j<N;j++){
            if(x+M>A.at(j)){
                c++;
            } else {
                break;
            }
        }
        if (best_c<c){
            best_x=x;
            best_c=c;
        }
    }
    cout << best_c << endl;
}
