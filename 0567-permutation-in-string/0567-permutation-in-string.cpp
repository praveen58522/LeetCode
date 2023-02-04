class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size()>s2.size()) return false;
        map<char,int> ms1,ms2;
        
        for(int i = 97; i <= 122; i++)
        {
            ms1[(char)i]=0;
            ms2[(char)i]=0;
        }
        for(int i=0;i<s1.size();i++)
        {
            ms1[s1[i]]++;
            ms2[s2[i]]++;
        }
        int start=0,end=s1.size()-1;
        while(end<s2.size())
        {
            if(ms1==ms2) return true;
            else
            {
                ms2[s2[start]]--;
                start++;
                end++;
                if(end == s2.size()) return false;
                else
                ms2[s2[end]]++;
            }
        }
        return false;
    }
};