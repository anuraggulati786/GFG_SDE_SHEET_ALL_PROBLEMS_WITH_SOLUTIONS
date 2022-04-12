// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {
        // Your code goes here
        // time complexity for our this program Naive approach is O(N^2)...
        //Time Limit Exceeded


//Your program took more time than expected.Time Limit Exceeded
//Expected Time Limit 1.47sec
//Hint : Please optimize your code and submit again.
        for(int i=1; i<= n; i++) {
            bool res = false;
            for(int j=0; j< n-1; j++) {
                if(arr[j] == i) {
                    res = true;
                }
            }
            if(res == false) {
                return i;
            }
        }
    }
};



// **************************OPTAMIZED APPROACH ****************




int MissingNumber(vector<int>& arr, int n) {
        // Your code goes here
        // time complexity for our this program approach is O(N)...
          // SPACE COMPLEXITY IS O(1)...
          
         int missing_number = 0;
         for(int i=1; i<=n; i++) {
             missing_number = missing_number ^ i ;
         }
         
          for(int i=0; i<n-1; i++) {
             missing_number = missing_number ^ arr[i] ;
         }
        return missing_number;
        }








//**************** one more approach to solve this probklem ...............


  int total = (n + 1) * (n) / 2;
        for (int i = 0; i < n-1; i++)
            total -= array[i];
        return total;




// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
