class Solution {
    // Another approach is by using Hashing
public:
    bool reorderedPowerOf2(int n) {
        vector<string> power;
        for(int i=0;i<=30;i++){
            int p = pow(2,i);
            power.push_back(to_string(p));
        }
        
        for(int i=0;i<=30;i++)
            sort(power[i].begin(),power[i].end());
        
        
        // solution starts here
        string s = to_string(n);
        sort(s.begin(),s.end());
        
        for(int i=0;i<=30;i++)
            if(power[i] == s ) 
                return true;
        
        return false;
    }
};