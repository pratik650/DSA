//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size()!=b.size()) return false;
        
        unordered_map<char,int> Map1;
        unordered_map<char,int> Map2;
        
        
        for(auto it:a){
            Map1[it]++;
        }
        for(auto it:b){
            Map2[it]++;
        }
        for (const auto& pair : Map1) {
        char key = pair.first;
        int value = pair.second;

        if (Map2.find(key) == Map2.end() || Map2[key] != value) {
            return false;
        }
        }
        
        return true;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends