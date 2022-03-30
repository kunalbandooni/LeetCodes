class Solution {
    bool b_search(vector<int> v, int target){
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid] == target)
                return true;
            if(v[mid] > target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++)
            if(matrix[i][n] >= target)
                return b_search(matrix[i],target);
        return false;
        
        /*
        TC: O(n^2)
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
                if(target == matrix[i][j])
                    return true;
        }
        return false;*/
    }
};