def search(self, nums, target):
    start = 0
    end = len(nums)-1
        
    while start <= end:
        middle = (end + start) // 2
            
        if target == nums[middle]:
            return middle
            
        if target < nums[middle]:
            end = middle-1
        else:
            start = middle+1
                
    return -1
