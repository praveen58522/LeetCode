//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int ans[2];
	    ans[0] = findFirst(arr, n, x);
	    ans[1] = findLast(arr, n, x);
	    if(ans[0] == -1) return 0;
	    return ans[1] - ans[0] + 1;
	}
	int findFirst(int arr[], int n, int x) {
	    int l = 0, h = n-1;
	    int ans = -1;
	    while(l <= h) {
	        int mid = l + (h-l)/2;
	        if(arr[mid] > x) h = mid - 1;
	        else if(arr[mid] < x) l = mid + 1;
	        else {
	            ans = mid;
	            h = mid - 1;
	        }
	    }
	    return ans;
	}
	int findLast(int arr[], int n, int x) {
	    int l = 0, h = n-1;
	    int ans = -1;
	    while(l <= h) {
	        int mid = l + (h-l)/2;
	        if(arr[mid] > x) h = mid - 1;
	        else if(arr[mid] < x) l = mid + 1;
	        else {
	            ans = mid;
	            l = mid + 1;
	        }
	    }
	    return ans;
	}
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends