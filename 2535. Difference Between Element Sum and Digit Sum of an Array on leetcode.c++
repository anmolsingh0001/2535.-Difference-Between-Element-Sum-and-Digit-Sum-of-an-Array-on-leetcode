class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int elementsum=0;
       for(int i=0; i<nums.size(); i++){
           elementsum+=nums[i];
       } 
       int digitsum=0;
       for(int j=0; j<nums.size(); j++){
           int num=nums[j];
           while(num>0){
               int digit=num%10;
               digitsum+=digit;
               num/=10;
           }
       }
       return (elementsum-digitsum);
    }
};