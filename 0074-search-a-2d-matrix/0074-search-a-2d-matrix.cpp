class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size(),n=matrix[0].size() ;
        
        int l=0,h=m*n-1,mid,i,j;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            i=mid/n;
            j=mid%n;
            
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};