let search = function(nums, target) {
    let start = 0;
    let end = nums.length - 1;
    
    if (end < 0) {
        return;
    }

    while (start <= end){
        let middle  = Math.trunc((end + start) / 2);
        
        if (target === nums[middle]){
            return middle;
        }
        
        if (target < nums[middle]){
            end = middle - 1;
        }else{
            start = middle + 1;
        }
        
    }
    
    return -1;
};
