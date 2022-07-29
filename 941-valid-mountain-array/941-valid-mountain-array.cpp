class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int up_till = 0, maxi = INT_MIN;
        
        // finding peak of the array
        for(int i=0;i<arr.size();i++)
            if(maxi < arr[i]){
                maxi = arr[i];
                up_till = i;
            }
        
        if(up_till == 0 || up_till == arr.size()-1) 
            return false;
        
        // Increasing array 
        for(int i = 0;i<up_till-1;i++)
            if(arr[i] >= arr[i+1])
                return false;
        
        // Decreasing array
        for(int i = up_till;i<arr.size()-1;i++)
            if(arr[i] <= arr[i+1])
                return false;
        
        return true;
    }
};