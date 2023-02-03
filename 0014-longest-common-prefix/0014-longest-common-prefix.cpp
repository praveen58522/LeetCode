class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0];
        int m = temp.size();
        for(int i = 1; i < strs.size(); i++){
            string curr = strs[i];
            int l = 0;
            for(int j = 0; j < curr.size(); j++){
                if(temp[j] == curr[j]){
                    l++;
                }
                else{
                    break;
                }
            }
            
            m = min(l , m);
        }
        
        return temp.substr(0, m);
    }
};