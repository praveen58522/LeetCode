class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        map<char,int> ms1,ms2;
        
        for(int i = 97; i <= 122; i++)
        {
            ms1[(char)i]=0;
            ms2[(char)i]=0;
        }
        for(int i=0;i<s1.size();i++)
        {
            ms1[s1[i]]++;
        }
        int start=0,end=0;
        while(end<s2.size())
        {
           if(end - start + 1 == s1.size()){
               ms2[s2[end]]++;
               if(ms1 == ms2) return true;
               ms2[s2[start]]--;
               start++;
               end++;
           }
            
            else{
                ms2[s2[end]]++;
                end++;
            }
        }
        return false; 
    }
};