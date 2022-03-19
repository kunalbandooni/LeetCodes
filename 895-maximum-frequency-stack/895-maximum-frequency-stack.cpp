class FreqStack {
    priority_queue<pair<int, pair<int, int>>> q;
    unordered_map<int, int> freq;
    int pos = 0;
public:
    void push(int x) {
        q.emplace(++freq[x], make_pair(++pos, x));
    }
    
    int pop() {
        auto val = q.top();
        q.pop();
        int x = val.second.second;
        freq[x]--;
        return x;
    }
};

/*class FreqStack {
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> m;
    int maxfreq = 0;
public:
    FreqStack() {
        // :) Thanks for watching this solution
    }
    
    void push(int x) {
        maxfreq = max(maxfreq, ++freq[x]);
        m[freq[x]].push(x);
    }
    
    int pop() {
        int x = m[maxfreq].top();
        m[maxfreq].pop();
        if (!m[freq[x]--].size())
            maxfreq--;
        return x;
    }
};*/

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */