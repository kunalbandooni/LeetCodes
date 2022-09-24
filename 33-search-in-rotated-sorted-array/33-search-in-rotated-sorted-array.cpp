class Solution {
public:
    int search(vector<int>& arr, int key) {
        int low = 0, high = arr.size()-1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == key)
                return mid;
            if(arr[low] <= arr[mid]){    // left array sorted
                if(arr[low] <= key and key < arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else{                    // right array sorted
                if(arr[mid] < key and key <= arr[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};