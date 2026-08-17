class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& nums, vector<int>& current) {
  
        ans.push_back(current);

        for (int i = index; i < nums.size(); i++) {
         
            current.push_back(nums[i]);

            solve(i + 1, nums, current);

       
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        solve(0, nums, current);
        return ans;
    }
};