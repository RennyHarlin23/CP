// g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int binaryLifting(vi &a, int target){
    int n=a.size(), start=0;
    for(int jump=n/2;jump>=1;jump/=2){
        while(start+jump < n && target >= a[start+jump])
        start+=jump;
    }
    if(start < n && a[start] == target)
    return 1;
    else
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // solution comes here
    vi a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        a.push_back(t);
    }

    int target;
    cin >> target;

    sort(a.begin(), a.end());

    int ans = binaryLifting(a, target);
    if(ans == 1)
    cout << "Element found" << "\n";
    else
    cout << "Element not found" << "\n";
    
    return 0;
}