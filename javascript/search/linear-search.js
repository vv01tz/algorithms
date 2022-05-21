const linearSearch = function(nums, target) {
    let size = nums.length;

    for (let i = 0; i < size; i++) {
        if (nums[i] === target) {
            return i;
        }
    }
    return -1;
}