class Solution {
public:
    string getSmallestString(int n, int k) {
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=1;
        k=k-n;
        int j=n-1;
        while(k!=0){
            int t;
            if(k>=25){
                t=25;
                k=k-25;
            }
            else{
                t=k;
                k=0;
            }
            a[j]=a[j]+t;
            j--;
        }
        string s="";
        for(int i=0;i<n;i++)
            s+=(a[i]+'a'-1);
        return s;
    }
};