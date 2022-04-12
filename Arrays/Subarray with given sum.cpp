// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code 
        // Your code here
       int sum = 0;
        int l=0;
       for(int i=0;i<n;i++)
       {
           if(sum<s)
                sum+=arr[i];
            
            if(sum==s)
                return {l+1,i+1};
        
            else
            {
                while(sum>s && l<=i)
                    {
                        sum-=arr[l];
                        l++;
                        if(sum==s)
                            return {l+1,i+1};
                        
                    }
            }
       }
       return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
