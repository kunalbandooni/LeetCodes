class Solution {
public:
    string removeDuplicateLetters(string s) {
        // SLIDING WINDOW APPROACH
        // youtube: https://www.youtube.com/watch?v=0tantogp8fc
        vector<int> dict(256, 0);
        vector<bool> visited(256, false);
        for(auto ch : s)  dict[ch]++;
        string result = "0";
        /** the key idea is to keep 
            a monotically increasing sequence **/
        for(auto c : s) {
            dict[c]--;
            /** to filter the previously visited elements **/
            if(visited[c])  
                continue;
            while(c < result.back() && dict[result.back()]) {
                visited[result.back()] = false;
                result.pop_back();
            }
            result += c;
            visited[c] = true;
        }
        return result.substr(1);
        
        // STACK APPROACH
        /*
        string res="";
        int lastPos[26] = {}; // the last position of the char
        bool added[26] = {};  // if the char is added to the result
        for (int i = 0; i < s.size(); i++)
            lastPos[s[i] - 'a'] = i;
        for (int i = 0; i < s.size(); i++){
            if (added[s[i] - 'a']) 
                continue;
            while ( !res.empty() && 
                   res.back() > s[i] && 
                   lastPos[res.back() - 'a'] > i){
                
                added[res.back() - 'a'] = false;
                res.pop_back();
            }
            res.push_back(s[i]);
            added[s[i] - 'a'] = true;
        }
        return res;
        */
    }
};