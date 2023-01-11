class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows;
        for(int i=0;i<n;i++)
        {
            vector<int> vec;
            for(int j=0;j<=i;j++)
                vec.push_back(1);
            ans.push_back(vec);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                    continue;
                else
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
        return ans;
    }
};