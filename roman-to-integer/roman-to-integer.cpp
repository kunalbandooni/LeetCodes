class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> a;
        a['I']=1;
        a['V']=5;
        a['X']=10;
        a['L']=50;
        a['C']=100;
        a['D']=500;
        a['M']=1000;
        int sum=0;
        for(int i=s.length()-1;i>=0;i--){
            if(a[s[i]]<a[s[i+1]]){
                sum = sum - a[s[i]];
            }
            else
                sum = sum + a[s[i]];
        }
        return sum;
    }
};