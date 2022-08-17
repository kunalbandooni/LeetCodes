class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_map<string,int> mp;
        int n = p.size();
        
        // inserting 'only words with alphabets' into hashmap
        for(int i = 0 ; i < n ;){
            string s = "";
            while(i < n and isalpha(p[i])) s+=tolower(p[i++]);
            while(i < n and !isalpha(p[i])) i++;
             mp[s]++;
        }
        
        // clearing those who are banned
        for(auto i:banned)
            mp[i] = 0;
        
        // find max_element in the map
        string ans = "";
        int maxi = INT_MIN;
        for(auto i:mp){
            if(i.second > maxi){
                ans = i.first;
                maxi = i.second;
            }
        }
        
        return ans;
    }
};