class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        /*int n=d.size();
        long long sum=0;
        for(int i=0;i<n;i++)
            sum = sum * 10 + d[i];
        sum++;
        vector<int> a;
        while(sum!=0){
            a.push_back(sum%10);
            sum=sum/10;
        }
        reverse(a.begin(),a.end());
        return a;*/
        /*
        int n=d.size();
        d[n-1]++;
        if(d[n-1]==10){
            vector<int> a;
            for(int i=n-1;i>=0;i--){
                if(d[i]==10){
                    a.push_back(0);
                    d[i]=0;
                    d[i-1]++;
                }
                else
                    a.push_back(d[i]);
            }
            if(d[0]>9){
                a.push_back(0);
                d[0]=0;
                a.push_back(1);
            }
            reverse(a.begin(),a.end());
            return a;
        }
        else
            return d;
            */
        int n=d.size();
        for(int i=n-1;i>=0;i--){
            if(d[i]<9){
                d[i]++;
                return d;
            }
            else{
                d[i]=0;
            }
        }
        d.insert(d.begin(),1);
        return d;
    }
};