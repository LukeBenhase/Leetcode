class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int c ;
        for (int i = 0; i < nums.size(); i++){
            if ( c == nums[i]){
                count ++;
            }
            else{
                if (count == 0){
                    count++;
                    c = nums[i];
                }
                else{
                    count--;
                }
            }
        }
        return c;

    }
};