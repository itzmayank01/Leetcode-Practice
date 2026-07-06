class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1;
        int maj2;
        int count1 = 0, count2=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if (nums[i] == maj2){
                 count2++;
            }
            else if (count1 == 0 ){
                count1 =1;
                maj1 = nums[i];
            }
            else if (count2 == 0 ){
                count2 = 1;
                maj2 = nums[i];
            }
            else{
                count1--;
                count2--;
            }
        } 
           // Phase 2 - your style
        vector<int> result;
        int freq1 = 0;
        int freq2 = 0;
        for(int &num : nums){
            if(num == maj1) freq1++;
            else if(num == maj2) freq2++;
        }

        if(freq1 > floor(nums.size() /3)){
            result.push_back(maj1);
        }
        if(freq2 > floor(nums.size()/3)){
            result.push_back(maj2);
        }

        return result;
    }
};