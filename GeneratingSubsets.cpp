//  g++-std=c++11-O2-Wall test.cpp-o test

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int n;
vi ans;
void generateSubsets(int k){
    if(k == n){
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    ans.push_back(k);
    generateSubsets(k+1);
    ans.pop_back();
    generateSubsets(k+1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // solution comes here
    cin >> n;
    generateSubsets(0);

    return 0;
}