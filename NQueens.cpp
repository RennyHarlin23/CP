//  g++-std=c++11-O2-Wall test.cpp-o test

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

vi colm;
vi diag1;
vi diag2;
int n;
int ans=0;

void search(int k){
    if(k == n){
        ans++;
        return;
    }

    for(int col=0;col<n;col++){
        if(colm[col] || diag1[k+col] || diag2[k-col+n-1]){
            continue;
        }
        colm[col] = 1;
        diag1[k+col] = 1;
        diag2[k-col+n-1] = 1;
        search(k+1);

        colm[col] = 0;
        diag1[k+col] = 0;
        diag2[k-col+n-1] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    colm.resize(n, 0);
    diag1.resize(100, 0);
    diag2.resize(100, 0);
    
    // solution comes here
    search(0);

    cout << ans;

    return 0;
}