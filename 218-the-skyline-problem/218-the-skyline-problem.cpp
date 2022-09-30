class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& v) {
        priority_queue<pair<int,int>> pq ;  // first =? height , second => end_time
    
        int n = v.size();
        vector<vector<int>>res;
        
        int curr = 0 ; // keep track of index 
        int curr_x = -1; // keep track of curr_x;
        int curr_height = -1 ; //keep track of curr_height 
     
        int res_size = 0 ;
    

        while(curr<n or !pq.empty()){
    
            curr_x = pq.empty() ? v[curr][0] : pq.top().second;

            if(curr>=n or v[curr][0] > curr_x){
                while(!pq.empty() and pq.top().second <=curr_x) 
                    pq.pop();
            }
            else {
                curr_x = v[curr][0];

                if(curr<n and v[curr][0] ==curr_x){
                    pq.push(make_pair(v[curr][2], v[curr][1] ));
                    curr++;
                }
            }
            curr_height = pq.empty() ? 0 : pq.top().first ;
            if(res_size==0 or res[res_size-1][1] !=curr_height){
                if(res_size !=0 and res[res_size-1][0]==curr_x)
                    res[res_size-1][1]= curr_height;
                else{
                    res.push_back({curr_x,curr_height});
                    res_size++;
                }
            }
        }
        return res;
    }
};