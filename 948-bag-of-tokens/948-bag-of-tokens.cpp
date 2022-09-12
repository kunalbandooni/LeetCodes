class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        
        int maxi = 0, score = 0;
        int i = 0, j = tokens.size()-1;
        
        while(i<=j){
            if(power < tokens[i] and score < 1)
                return maxi;
            if(power >= tokens[i]){
                score++;
                power = power - tokens[i]; 
                i++;
            }
            else{
                score--;
                power = power + tokens[j];
                j--;
            }
            
            maxi = max(maxi, score);
        }
        return maxi;
    }
};