//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long arr[], int n) {
       pair<long long, long long> ans;

       long long min_val = INT_MAX;
       long long max_val = INT_MIN;
       for (int i = 0; i < n; i++) {
           if (arr[i] < min_val) {
               min_val = arr[i];
           }
           if (arr[i] > max_val) {
               max_val = arr[i];
           }
        }
        
        ans.first = min_val;
        ans.second = max_val;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends