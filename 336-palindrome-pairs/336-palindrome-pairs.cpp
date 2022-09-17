struct TrieNode
{
    TrieNode *child[26]={};
    int curIndex=-1;
    vector<int> wordIndex;
};
class Solution
{
    bool isPalindrome(string &s, int i, int j)
    {
        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    TrieNode *root;
    void insert(string &s, int index)
    {
        TrieNode *cur = root;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int c = s[i] - 'a';
            if (cur->child[c] == nullptr)
                cur->child[c] = new TrieNode();
            if (isPalindrome(s, 0, i))
                cur->wordIndex.push_back(index);
            cur = cur->child[c];
        }
        cur->wordIndex.push_back(index);
        cur->curIndex = index;
    }

public:
    vector<vector<int>> palindromePairs(vector<string> &words)
    {
        root = new TrieNode();
        for (int i = 0; i < words.size(); i++)
            insert(words[i], i);
        vector<vector<int>> ans;
        for (int i = 0; i < words.size(); i++)
        {
            TrieNode *cur = root;
            string &s = words[i];
            for (int j = 0; j < s.size(); j++)
            {
                if (cur->curIndex != -1 && cur->curIndex != i && isPalindrome(s, j, s.size() - 1))
                    ans.push_back({i, cur->curIndex});
                cur = cur->child[s[j] - 'a'];
                if (cur == nullptr)
                    break;
            }
            if (cur == nullptr)
                continue;
            for (int j : cur->wordIndex)
            {
                if (i == j)
                    continue;
                ans.push_back({i, j});
            }
        }
        return ans;
    }
};

/*struct Node{
    Node* links[26];
    bool flag = false;
    
    bool containsKey(char ch){
        return (links[ch - 'a'] != NULL);
    }
    
    void putChar(char ch, Node* temp){
        links[ch - 'a'] = temp;
    }
    
    Node* get(char ch){
        return links[ch - 'a'];
    }
    
    bool isEnd(){
        return flag;
    }
    
    void setEnd(){
        flag = true;
    }
};
class Trie{
    Node* root;
    
    bool isPalindrome(string &s, int i, int j){
        while (i < j){
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    
    public:
    
    Trie(){
        root = new Node();
    }
    
    void insert(string word){
        Node* temp = root;
        for(int i=0;i<word.length();i++){
            if(!temp->containsKey(word[i])){
                temp->putChar(word[i], new Node());
            }
            temp = temp->get(word[i]);
        }
        temp->setEnd();
    }
    
    
};
class Solution {
    Trie trie;
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {

        for (int i = 0; i < words.size(); i++)
            trie->insert(words[i], i);

        vector<vector<int>> ans;
        
        for (int i = 0; i < words.size(); i++){
            
            Trie *cur = trie;
            string &s = words[i];
            
            for (int j = 0; j < s.size(); j++){
                
                if (cur->curIndex != -1 && 
                        cur->curIndex != i && 
                        trie->isPalindrome(s, j, s.size() - 1))
                    ans.push_back({i, cur->curIndex});
                
                cur = cur->child[s[j] - 'a'];
                
                if (cur == nullptr)
                    break;
            }
            
            if (cur == nullptr)
                continue;
            for (int j : cur->wordIndex)
            {
                if (i == j)
                    continue;
                ans.push_back({i, j});
            }
        }
        return ans;
    }
};*/