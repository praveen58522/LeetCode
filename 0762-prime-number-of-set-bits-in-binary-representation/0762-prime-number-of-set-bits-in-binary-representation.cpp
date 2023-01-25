class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            bitset<32> b(i);
            int count=b.count();
            
            int j=2;
            for(;j<count;j++)
            {
                if(count%j==0) break;
            }
                if(count==j) ans++;
                
        }
        return ans;
    }
};