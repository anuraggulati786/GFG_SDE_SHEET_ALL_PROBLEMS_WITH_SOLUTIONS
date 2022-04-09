// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        // time complexity of this solution is O(log N)...
        // space complexity is O(1)....
        // iterative is better solution than recursive solution....
        
        
        
        int s = 0;
        int e = n-1;
        while(s <= e) {
            int mid = s+(e-s)/2;
            if(arr[mid] == k) {
                return mid;
            }
            else if(arr[mid] > k) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends
