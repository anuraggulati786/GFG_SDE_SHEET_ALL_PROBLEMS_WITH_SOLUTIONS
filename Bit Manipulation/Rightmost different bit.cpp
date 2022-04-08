// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
       // optamized solution ...
       //  Time Complexity: O(max(log m, log n))....
       if(m != n) {
        // Your code here
        // first find xor of both m and n...
       int Xor = m ^ n;
       // now we see the first det bit in xor ...
       int value = Xor & ~(Xor - 1);
       // now finded the position of the set bit...
       int position = log2(value) + 1;
       // return that position...
       return position;
       }
       
       else {
           return -1;
       }
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends
