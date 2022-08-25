class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m[26]={0};
        
        for(int i=0;i<ransomNote.length();i++)
            m[ransomNote[i]-'a']--;
        
        for(int i=0;i<magazine.length();i++)
            m[magazine[i]-'a']++;
        
        for(int i=0;i<26;i++)
            if(m[i] < 0)
                return false;
        return true;
    }
};