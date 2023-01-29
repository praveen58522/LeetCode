//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int mer[r-l+1];
         int s1 = l, s2 = m+1, x = 0;
         
         while(s1<=m && s2<=r){
             if(arr[s1] <= arr[s2]){
                 mer[x++] = arr[s1++];
             }
             else{
                 mer[x++] = arr[s2++];
             }
         }
         
         while(s1<=m){
             mer[x++] = arr[s1++];
         }
         
         while(s2<=r){
             mer[x++] = arr[s2++];
         }
         
         for(int i = 0, j = l; i < r-l+1; i++, j++){
             arr[j] = mer[i];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l >= r){
            return;
        }
        
        int mid = l + (r-l)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends