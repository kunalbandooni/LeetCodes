class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size()<=1)
            return false;
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        
        int n=arr.size();
        int a[1000]={0};
        for(auto j=m.begin();j!=m.end();j++){
            if(a[j->second]!=0)
                return false;
            a[j->second]=j->second;
        }    
        return true;
    }
};