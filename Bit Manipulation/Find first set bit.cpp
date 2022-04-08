// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    
    
    // time complexity for this solution is ... O(log N)....
    unsigned int getFirstSetBit(int n)
    {
        int count=0;
        
        while(n>0){      //1- 18>0  // 2- 9>0
           
           if((n&1)==1){ 
               
             count++; 
          
               break; 
          
           }
           
           else{        
               
               count++;   
          
              n=n>>1;    
           }
       }
        
       return count;
    }
    
    // optamized approach ..........................................................
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        
        // time complexity for this solution is O(log n)...
        
		unsigned int ans = n & ~(n-1);
        
        ans = log2(ans) + 1;
        return ans;
    }
        
    
    
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends
