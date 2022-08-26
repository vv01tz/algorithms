// Consumes an array of numbers, a number to find and the size of 
// the array. It returns the index of the number if its
// found in the array otherwise it returns -1.
int linearSearch(int numbers[], int n, size_t length)
{
   for (int i = 0; i < length; i++)
   {
       if (numbers[i] == n)
       {
           return i;
       }
   }
   return -1; 
}