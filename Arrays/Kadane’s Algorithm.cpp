// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // this is O(N^2) Approach so we get TLE for sure in this .....
        // let us optamize this more in linear time O(n)......
       long long int maxi = 0;
       for(int i=0; i<n; i++) {
           
           int curr_max = 0;
           for(int j = i; j<n; j++) {
               curr_max += arr[j];
               if(curr_max > maxi) {
                   maxi = curr_max;
               }
           }
           
       }
       if(maxi > 0) {
           return maxi;
       }
       else {
           return -1;
       }
    }
    
    
    
    
    
    //%*(*********************)
    
    // optamized 
    // TC O(N)>>>>>>>>>>>>>>>>
    
    long long maxSubarraySum(int a[], int n){
        // this is O(N^2) Approach so we get TLE for sure in this .....
        // let us optamize this more in linear time O(n)......
      long long max_curr = 0, max_final = a[0];
        
        //Iterating over the array.
        for(int i=0;i<n;i++) 
            {
                //Updating max sum till current index.
                max_curr+=a[i];
                //Storing max sum so far by choosing maximum between max 
                //sum so far and max till current index.
                if(max_final<max_curr)
                max_final=max_curr; 
                
                //If max sum at current index is negative, we do not need to add
                //it to result so we update it to zero.
                if(max_curr<0)
                    max_curr=0;
    
            }
            //returning the result.
            return max_final;
    }
    
    
    
    
    
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
