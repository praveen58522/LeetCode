class Solution {
public:
    int search(vector<int>& a, int target) {
        
        
     int l=0,h=a.size()-1;
        int mid;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(a[mid]==target) return mid;
            if(a[l]<=a[mid]){
                if(a[l]<=target && a[mid]>target){
                    h = mid-1;
                }
                else{
                    l= mid+1;
                }
            }
            else{
                if(a[mid]<target && a[h]>=target){
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
        }
        return-1;
    }
};