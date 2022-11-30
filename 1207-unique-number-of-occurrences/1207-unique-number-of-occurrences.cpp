class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp1;
        for(auto i:arr)
            mp1[i]++;
        
        map<int,int> mp2;
        for(auto i:mp1){
            if(mp2.find(i.second) != mp2.end())
                return false;
            mp2[i.second] = 1;
        }
        return true;
    }
};