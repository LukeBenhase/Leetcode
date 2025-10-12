class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 ) return 0;
        
        int d =0;
        int i =0 ;
        for (int j = 1; j < nums.size(); j++){
            if (nums[i] != nums[j]){
                // check if this is a duplicate 
                d = 0;
                i++;
                nums[i] = nums[j];
            }
            else if (nums[i] == nums[j] && d == 0){
                d++;
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }
};