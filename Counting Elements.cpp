class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> uset;
        for(int x : arr){
            uset.insert(x);
        }
        int cnt = 0;
        for(int x : arr){
            if(uset.count(x+1) == 1)
                cnt++;
        }
        
        return cnt;
        
        
        
        // sort(arr.begin(),arr.end());
        // int temp_counter = 0;
        // int sum = 0;
        // for(int i = 0; i < arr.size() -1 ; i++){
        //     if(arr[i + 1] == arr[i] + 1){
        //         sum += temp_counter + 1;
        //         temp_counter = 0;
        //     }
        //     else if(arr[i+1] == arr[i]){
        //         temp_counter++;
        //     }
        //     else{
        //         temp_counter = 0;
        //     }
        // }
        // return sum;
        
    }
};
