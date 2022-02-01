var search = function(nums, target) {
    start = 0;
    end = nums.length - 1;
    
    while (true){
        middle  = Math.floor((end + start) / 2);
        
        if (target === nums[middle]){
            return middle;
        }
        
        if (start === end) {
            return -1;
        }
        
        if (target < nums[middle]){
            end = middle;
            continue;
        }else if(target > nums[middle]){
            start = middle + 1;
            continue;
        }
        
    }
};