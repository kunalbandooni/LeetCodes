class Solution {
    vector<string>morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string util(string m){
        string res = "";
        for(int i=0;i<m.length();i++)
            res += morseCode[m[i] - 'a'];
        return res;
    }
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        
        for(int i=0;i<words.size();i++){
            string z = util(words[i]);
            s.insert(z);
        }
        
        return s.size();
    }
};