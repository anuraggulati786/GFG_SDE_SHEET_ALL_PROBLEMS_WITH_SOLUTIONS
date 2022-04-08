// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        // over all TC is O(log N)...
        // Your logic here...
        // first find the xor of both a and b ...
        int Xor  = 0;
        Xor  = a^b;
        
        // then find number of set bits in it using brian karningham algo...
        int count = 0;
        while(Xor != 0) {
            Xor = Xor &(Xor - 1);
            count++;
        }
        return count ;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
