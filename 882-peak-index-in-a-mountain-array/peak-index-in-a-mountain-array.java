class Solution {
    public int peakIndexInMountainArray(int[] arr) {
       int h = arr.length -1;
       int l=0;
        while(l<=h ){
            int m = l +(h-l) /2;
            if(arr[m ] >arr[m+1]){
                h=m-1;
            }
            else{
                l=m+1;
            }


        }

        return l;
    }
}