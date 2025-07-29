class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int h = letters.length-1;
        int l = 0;

        int s= letters.length;

        while(l <= h){
            int m =( l+ (h-l)/2);

            if(letters[m] > target){
                h= m-1;
            }
            else{
                l= m+1;
            }

        }    
        return letters[l % s ];
    }
}