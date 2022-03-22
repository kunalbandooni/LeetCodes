class Solution {
public:
    string getSmallestString(int n, int k) {
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=1;
        k=k-n;
        int j=n-1;
        while(k!=0){
            a[j]=a[j]+min(25,k);
            k=k-min(25,k);
            j--;
        }
        string s="";
        for(int i=0;i<n;i++)
            s+=(a[i]+'a'-1);
        return s;
    }
};