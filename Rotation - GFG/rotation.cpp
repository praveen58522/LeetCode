//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    
	    int l=0,h=n-1,mid,pivot=0;
	    
	    if(arr[h]>arr[l]||n==1) return 0;
	    
	    while(l<=h)
	    {
	        mid=l+(h-l)/2;
	        if(arr[0]<=arr[mid])
	        {
	            l=mid+1;
	        }
	        else
	        {
	            pivot=mid;
	            h=mid-1;
	        }
	    }
	    return pivot;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends