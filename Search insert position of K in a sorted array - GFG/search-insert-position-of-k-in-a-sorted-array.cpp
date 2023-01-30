//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int n, int k)
    {
        int l=0,h=n-1,mid;
        

        
        long long ans=-1;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(Arr[mid] == k)
            {

                ans = mid-1;
                break;
            }
            else if(Arr[mid] < k)
            {

                ans = mid;
                l=mid+1;
            }
            else{
                h = mid-1;
            }
        }
        
            return ans+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends