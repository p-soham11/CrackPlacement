// OPTIMAL SOLUTION

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++)
        {
            int remainder = target - nums[i];
            // TC of unordered map is: O(1)
            if(mpp.count(remainder))    
            {
                return {mpp[remainder],i};
            }
            // If pair isn't available, it will create a map.
            mpp[nums[i]] = i;
        }
        return {};
    }
};



// BRUTE SOLUTION

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n= nums.size();
//         vector<int> res;
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if (nums[i] + nums[j] == target)
//                 {
//                     res.push_back(i);
//                     res.push_back(j);
//                     return res;
//                 }
//             }
//         }
//         return res;
//     }
// };


