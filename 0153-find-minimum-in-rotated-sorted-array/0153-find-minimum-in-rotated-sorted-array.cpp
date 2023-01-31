class Solution {
public:
    int findmini(vector<int> a, int l, int h){
        
        if(h<l) return a[0];
        if(h==l) return a[l];
        
        int mid=l+(h-l)/2;
        
        if (mid<h && a[mid + 1] < a[mid])
            return a[mid + 1];
        if (mid > l && a[mid] < a[mid - 1])
            return a[mid];

        if (a[h] > a[mid])
            return findmini(a, l, mid - 1);
        
        return findmini(a, mid + 1, h);
    }
    int findMin(vector<int>& a) {
        int min = findmini(a, 0, a.size() - 1);
        return min;
    }
};