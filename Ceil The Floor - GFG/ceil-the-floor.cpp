//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    
    int ans1=INT_MIN,ans2=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            ans2=min(arr[i],ans2);
        }
        else if(arr[i]<x)
        {
            ans1=max(arr[i],ans1);
        }
        else
        {
            ans1=arr[i];
            ans2=arr[i];
            break;
        }
    }
    if(ans1==INT_MIN) ans1=-1;
    if(ans2==INT_MAX) ans2=-1;
    pair<int,int> p1(ans1,ans2);
    
    return p1;
    
}