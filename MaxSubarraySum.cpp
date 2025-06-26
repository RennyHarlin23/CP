#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    
    // Approach 1: O(n^3)
    int best_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += a[k];
            }
            best_sum = max(best_sum, sum);
        }
    }
    cout << best_sum << '\n';

    // Apprach 2: O(n^2)
    best_sum = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            // you calculate the sum from i to n, if sum increases then update bestsum
            sum += a[j];
            best_sum = max(best_sum, sum);

        }
    }
    cout << best_sum << '\n';

    // Approch 3: O(n)
    // Calculate best continuous sum till an index i and max out all of the sums
    // Subproblem defnition: MaxSubarraySum(a) = max of all sums containing a[i] for all i from 0 to n
    best_sum = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = max(a[i], sum + a[i]); 
        best_sum = max(best_sum, sum);
    }
    cout << best_sum << '\n';


}