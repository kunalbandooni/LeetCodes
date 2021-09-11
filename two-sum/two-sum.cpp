class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> s;
        int n=a.size();
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]+a[j] == target){
                    s.push_back(i);
                    s.push_back(j);
                    break;
                }
        return s;
    }
};