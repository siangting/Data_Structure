class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp=0;

        for(int i=nums.size()-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                for(int j=nums.size()-1; j>i-1; j--){
                    if(nums[j]>nums[i-1]){
                        temp=nums[j];
                        nums[j]=nums[i-1];
                        nums[i-1]=temp;
                        break;
                    }
                }
                reverse(nums.begin()+i, nums.end());
                return;
            }
        }

        reverse(nums.begin(), nums.end());
    }
};