class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        int count=0;
        sort(people.begin(),people.end());
        if(people[j]>limit)
            return -1;
        while(people[j]==limit){
            count++;
            j--;
        }
        /*if(people.size()==2){
            if(people[0]+people[1]==limit)
        }*/
        while(i<=j){
            if(i!=j and people[j]+people[i]<=limit){
                i++;
                j--;
                count++;
            }
            else{
                j--;
                count++;
            }
        }
        return count;
    }
};