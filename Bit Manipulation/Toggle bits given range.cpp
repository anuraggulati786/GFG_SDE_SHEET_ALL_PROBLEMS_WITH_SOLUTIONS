// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int toggleBits(int n , int l , int r) {
        // code here
   // time complexity for this solution is O(r).....
     for(int i=l;i<=r;i++)
        {
            n = n^(1<<(i-1));
        }
        return n;
    }
    
    
    
    // optamized solution ...
    // time complexity for this solution is O(1)...
    int mask = 1<<(R-L+1);
    mask = mask-1;
    mask = mask<<(L-1);
    N = N^mask;
    return N;
    
   
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends
