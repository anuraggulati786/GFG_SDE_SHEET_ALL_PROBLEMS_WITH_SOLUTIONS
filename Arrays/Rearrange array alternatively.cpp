// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	// Auxiliary array to hold modified array
    	// time complexity is O(N)...
    	//space complexity is O(N)....
    	// space optamize kar bhai thoda aur...
    	vector<int>v;
        for(int i=0;i<=n/2;i++){       
            v.push_back(arr[n-1-i]);
            v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
           arr[i] = v[i];
        } 
    }
	
	
	// my linear space approach ......
	
	
	
       // i had used space here so the space complexity for this program is O(N)....
       // time complexity is O(N)...
       // but we get segmentation fault in this...    :(   optamize space more; 
       long long int temp[n];
       long long int indx = 0;
       
       long int l = 0; 
       long int hi = n-1;
       
       while(l <= hi) {
           
           temp[indx] = arr[hi];
           indx++;
           hi--;
           
           temp[indx] = arr[l];
           indx++;
           l++;
           
       }
       
       
       
       for(int i=0; i<n; i++) {
           arr[i] = temp[i];
       }
	
	
	
	
	
	
	
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 


//*****************************************

// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    // time complexity of this solution is O(N)........
        // space is constant.........O(1)...............
        //adding elements to the array
    void rearrange(long long *arr, int n) 
    { 
    	//Initialising index of first minimum and first maximum element. 
    	int max_idx = n - 1, min_idx = 0; 
    
    	//Storing maximum element of array. 
    	int max_elem = arr[n - 1] + 1; 
    
    	for (int i = 0; i < n; i++) { 
    		//At even index, we have to put maximum elements in decreasing order. 
    		if (i % 2 == 0) { 
    			arr[i] += (arr[max_idx] % max_elem) * max_elem;
    			//Updating maximum index.
    			max_idx--; 
    		} 
    
    		//At odd index, we have to put minimum elements in increasing order. 
    		else { 
    			arr[i] += (arr[min_idx] % max_elem) * max_elem;
    			//Updating minimum index.
    			min_idx++; 
    		} 
    	} 
    
    	//Dividing array elements by maximum element to get the result. 
    	for (int i = 0; i < n; i++) 
    		arr[i] = arr[i] / max_elem; 
    
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends




void rearrange(long long *arr, int n) 
    { 
    	// Auxiliary array to hold modified array
    int temp[n];
 
    // Indexes of smallest and largest elements
    // from remaining array.
    int small = 0, large = n - 1;
 
    // To indicate whether we need to copy remaining
    // largest or remaining smallest at next position
    int flag = true;
 
    // Store result in temp[]
    // TC O(N)............
    //SC O(N)............
    for (int i = 0; i < n; i++) {
        if (flag) {
            temp[i] = arr[large];
            large--;
            flag = false;
        }
        else {
            temp[i] = arr[small];
            small++;
            flag = true;
        }
    }
    // Copy temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    	 
    }

  // } Driver Code Ends
