class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int  j=0;
        for(int i = num.size() - 1; i >= 0; i--){
            if((int)num[i]%2!=0){
                ans = num.substr(0, i+1);
                return ans;
            }
        }
        
        return "";
    }
};