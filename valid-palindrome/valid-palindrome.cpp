class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(),i;
        string temp;
        for(i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                temp+=s[i];           
            else if(s[i]>='A' && s[i]<='Z')
                temp+= s[i]+32;
        }
        s=temp;
        //reverse(s.begin(),s.end());
        for (int i = 0; i < s.size() / 2; i++)
            swap(s[i], s[s.size()-i-1]);
        cout<<s<<" "<<temp;
        if(temp==s)
            return true;
        return false;
    }
};