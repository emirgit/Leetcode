/*
With basic nested loop = Time Limit Exceeded

    int i,j;

    for(i = 0; i < numsSize; i++){
        for (j = 0; j < numsSize; j++){
            if (j != i && nums[j] == nums[i])
                return (1);
        }
    }

With Insertion sort = Time Limit Exceeded

    void insertionSort(int* nums, int numsSize){
    int i, key, j;
    for (i = 1; i < numsSize; i++)
    {
        key = nums[i];
        j = i - 1;

        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
}

bool containsDuplicate(int* nums, int numsSize){


    int i;

    insertionSort(nums, numsSize);
    
    for(i = 0; i < numsSize - 1; i++){
        if (nums[i] == nums[i + 1])
            return (1);
    }
    

    return (0);
}

With heapSorting algorithm = 128ms Runtime 13.02 Memory

    code is below
*/
void swap(int* a, int* b)
{
    int temp;
 
    temp = *a;
    *a = *b;
    *b = temp;
}
 

void heapify(int arr[], int N, int i)
{
    int largest, right, left;

    largest = i;

    left = 2 * i + 1;

    right = 2 * i + 2;
 

    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 

    if (right < N && arr[right] > arr[largest])
 
        largest = right;

    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);

        heapify(arr, N, largest);
    }
}
 
void heapSort(int* nums, int numsSize)
{
    int i;
 
    for (i = numsSize / 2 - 1; i >= 0; i--)
 
        heapify(nums, numsSize, i);
 
    for (i = numsSize - 1; i >= 0; i--) {
 
        swap(&nums[0], &nums[i]);

        heapify(nums, i, 0);
    }
}


bool containsDuplicate(int* nums, int numsSize){
/*
    it can be solved by using 2 nested loop
    but it gives us numSize^2 time complexity
    one of the best algorithm is hashset
    but in c, it is better with sorting list and checking the consecutive couples
    
    
    it will be nlogn for best condition
    else it will be n^2

*/


    int i;

    heapSort(nums, numsSize);
    
    for(i = 0; i < numsSize - 1; i++){
        if (nums[i] == nums[i + 1])
            return (1);
    }
    

    return (0);
}