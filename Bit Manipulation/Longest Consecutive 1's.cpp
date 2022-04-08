// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        // naive approach 
        // time complexity for this solution is O(log n)...
        int max_count = 0;
        int curr_count = 0;
        
        while(N != 0) {
           
            if(N & 1 == 1) {
                curr_count++;
                max_count = max(max_count,curr_count);
              }
            else{
                curr_count = 0;
             }
             
            N = N >> 1;
        }
        return max_count;
    }
    
    
    //#####################################################################################
        // optamized  approach 
        // time complexity for this solution is O(log n)...
        int count = 0;
     
      //We use a loop to perform AND operation on N and N<<1 and everytime the 
      //trailing 1 from every sequence of consecutive 1s is removed.
      //Loop continues till N is reduced to 0.
       while (N!=0)
        {
           //Assigning result of AND operation to N
            N = (N & (N << 1));
           //increement of counter variable.
            count++;
        }
        //returning the answer.
        return count;
    
    
    
    
    
    
    
    
    
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
