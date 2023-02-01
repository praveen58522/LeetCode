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
	        int next,prev;
	        next=(mid+1)%n;
	        prev=(mid+n-1)%n;
	        
	        if(arr[mid]<=arr[next]&&arr[mid]<=arr[prev]) return mid;
	        if(arr[l]<=arr[mid]){
	            l=mid+1;
	            next=(l+1)%n;
	            prev=(l+n-1)%n;
	            if(arr[l]<=arr[next]&&arr[l]<=arr[prev]) return l;
	        } 
	        else if (arr[mid]<=arr[h]){
	            h=mid-1;
	            next=(h+1)%n;
	            prev=(h+n-1)%n;
	            if(arr[h]<=arr[next]&&arr[h]<=arr[prev]) return h;
	        } 
	        
	}
	
	return 0;
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