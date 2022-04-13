// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here/
        // my naive solution for this pronlem ....surely we get TLE in this because Time complexity is O(N^2)..
        // space complexity is O(1).....
        int max_length = 0;
        for(int i=0; i<n; i++) {
            int curr_length = arr[i];
            for(int j=i+1; j<n; j++) {
                
                    curr_length += arr[j];
               if(curr_length == 0) {
                   max_length = max(max_length , j-i+1);
               }
            }
        }
        return max_length;
    }
};



// optamized solution ,,,,,,,
// in time complexity O(N)...........
// and space O(N)................

int maxLen(vector<int>&arr, int n)
    {   
        // Your code here/
        // my naive solution for this pronlem ....surely we get TLE in this because Time complexity is O(N^2)..
        // space complexity is O(1).....
        unordered_map<int,int>m;
       int pre =0 , max_l=0;
       
       for(int i=0;i<n;i++)
       {
           pre+= arr[i]; 
           if(pre==0)
               max_l = i+1; 
           else if(m.find(pre)==m.end())
               m[pre] = i;
           else
               max_l = max(max_l,i-m[pre]);    
       }
       return max_l;
    }

       







// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
