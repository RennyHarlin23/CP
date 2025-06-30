//  g++-std=c++11-O2-Wall test.cpp-o test

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int n;
vi solns;
int choices[100];

void generatePermutations(){
    if(solns.size() == n){
        for(int i=0;i<n;i++){
            cout << solns[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(choices[i] == 1)
            continue;
        choices[i] = 1;
        solns.push_back(i);
        generatePermutations();
        choices[i] = 0;
        solns.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // solution comes here
    cin >> n;
    generatePermutations();
}