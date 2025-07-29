class Solution {

    public int search(int [] nums , int target  ,boolean first){
        int ans =-1;
        int h= nums.length -1;
        int l = 0;

        while(l<=h){
            int m = l + (h-l)/2;

            if(nums[m] > target){
                h= m-1;

            }

            else if (nums[m]<target){
                l= m+1;

            }
            else{
                ans=m;

                if(first){
                    h= m-1;
                }
                else{
                    l=m+1 ;               }
            }
        }


        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int ans[] ={-1,-1};
        int s = search(nums, target, true);
        

            int l = search(nums, target , false);
            
        

            ans[0] =s;
            ans[1] =l;
    
         return ans;
    }
}