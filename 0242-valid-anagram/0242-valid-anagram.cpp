class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        const int CHAR = 256;
        int c[CHAR] = {0};
        
        if(s.size()!=t.size()) return false;
        
        for(int i=0;i<s.size();i++)
        {
            c[s[i]]++;
            c[t[i]]--;
        }
        for(int i = 0 ; i < CHAR ; i++)
        {
            if(c[i]!=0) return false;
        }
        return true;
    }
};