void sortColors(vector<int>& nums) {
        int red,white,blue = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0) red++;
            else if(nums[i] == 1) white++;
            else blue++;
        }

        for(int i = 0; i<nums.size(); i++){
            if(red != 0){
                nums[i] = 0;
                red--;
            }
            else if(white != 0){
                nums[i] = 1;
                white--;
            }
            else{
                nums[i] = 1;
                blue--;
            }
        } 
    }
