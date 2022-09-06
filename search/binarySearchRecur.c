// Consumes: An array of integers [arr], a target [n], a starting point
//           [start] and an ending point [end].
// Returns the index of the target if it is found in the array.
// Otherwise it returns -1.
int binarySearchRecur(int arr[], int n, int start, int end)
{
    // Get middle point between two bounds.
    int middle = (start + end) / 2;

    if (arr[middle] == n) // The target was found.
    {
        return middle;
    }

    if (start >= end) // n was not found in the array. 
    {
        return -1;
    }

    if (arr[middle] > n)
    {
        // Consider the left half of the array.
        return binarySearchRecur(arr, n, start, middle - 1);
    }

    // Consider the right halft of the array.
    return binarySearchRecur(arr, n, middle + 1, end);
}
