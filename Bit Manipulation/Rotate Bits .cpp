// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{ 
  public:
        vector <int> rotate (int n, int d)
        {// time complexityn for this solution is constant O(1)...
            int INT_BITS = 16;
            if(d > 16)
                d = d%16;
            int a ,b ;
            a = (n << d) | (n >> (INT_BITS - d));
            b = (n >> d) | (n << (INT_BITS - d));
            
            a = (a & ((1 << 16)-1));
            b = (b & ((1 << 16)-1));
            
            return {a , b};
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
