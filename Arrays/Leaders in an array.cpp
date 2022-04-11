// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        // naive approach 
        // time complexity for this solutioj is O(N^2) ..
        // space complexity for this solution is O(N)....
        vector<int> leaders;
        
        for(int i=0; i<n; i++) {
            int res = arr[i];
            for(int j=i+1; j<n; j++) {
                if(arr[j] > arr[i]) {
                    res = -1;
                    break;
                }
            }
            if(res != -1) {
                leaders.push_back(res);
            }
        }
        return leaders;
    }
    
    
    
    
    //*******************OPTAMIZED APPROACH****************
    
    
    // time complexity for this solution is O(N)..
    // space complexity is O(N).....
    
     vector<int> leaders(int arr[], int n){
        // Code here
        // optamized approach for this is iterate from back siode in the array ...
        // time complexity is O(N)...
        // space is O(N)...
       vector<int> res;
                  
        int temp = arr[n-1];
        res.push_back(temp);
        
        for(int i= n-2; i>=0; i--) {
            
            if(arr[i] >= temp) {
                res.push_back(arr[i]);
                temp = arr[i];
            }
        }
        
        reverse(res.begin(),res.end());
       return res; 
    }
    
    
    
    
    
    
    
    
    
    
    
    
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
