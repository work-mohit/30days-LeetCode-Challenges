class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int low= 0 , high = nums.size()-1;
        int count = 0;
        while(low < high){
            if ((nums[low] + nums[high]) == k){
                count++;
                low++;
                high--;
            }
            else if((nums[low] + nums[high]) < k)
                low++;
            else if((nums[low] + nums[high]) > k){
                high--;
            }
        }
        return count;
    }
};

// Another solution with hashmap(unordered Map)
// we maintain a hashmap (m )
// and run a loop in entire array 
// then we check if (m[k-nums[i]] > 0)        point is a pair will be ( x , k-x) 
// if yes then ans++ (because there exist a (k-x) for a x) 
// and decreament the count of that (k-x) element m[k-nums[i]]--
// else we just increase the k-x count 
// and at last we return ans

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;
		int ans = 0;
		for(int i = 0; i < nums.size(); i++){
			if(m[k - nums[i]] > 0){
			   m[k - nums[i]]--;
				ans++;
			}
			else{
				m[nums[i]]++;
			}
		}
		return ans;
    }
};
