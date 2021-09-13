class Solution {
public:
    int myAtoi(string s) {
        /*
        int n=s.length(),i=0,f=0;
        long a=0;
        while(s[i] == ' ')
            i++;
        if(s[i] == '-'){
            f=1;
            i++;
        }
        else if(s[i] == '+')
            i++;
        while(i<n){
            if(s[i]<'0' || s[i]>'9')
                return f==1?(-1*f):f;
            a=a*10+(s[i]-'0');
            i++;
            if(a>INT_MAX)
                return f==1?INT_MIN:INT_MAX;
        }
        return f==1?(-1*f):f;*/
        int f=1,i=0;
        int n=s.length();
        long long a=0;
        while(s[i]==' ')
            i++ ;
        if(s[i]=='-')
        {
            f=0 ;
            i++ ;
        }
        else if(s[i]=='+')
            i++ ;
        while(i<n)
        {
            if(s[i]<'0'||s[i]>'9')
                return f==0?(-1*a):a;
            int temp=s[i]-'0';
            a=a*10+temp;
            if(a>INT_MAX)
                return f==0?INT_MIN: INT_MAX;
            i++;
        }
        return f==0?(-1*a):a ;
    }
};