// g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void swap(vi &a, int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubbleSort(vi &a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(a[j-1] > a[j]){
                swap(a, j-1, j);
            }
        }
    }
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

    bubbleSort(a);

    for(int i=0;i<n;i++){
        cout << a[i] << '\n';
    }
    
    return 0;
}