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
        while(i<=j){
            if(people[j]+people[i]<=limit){
                i++;
                j--;
            }
            else
                j--;
            count++;
        }
        return count;
    }
};