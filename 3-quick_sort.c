#include "sort.h"


void swap(int *a, int *b)
    {
    int temp = *a;
    *a = *b;
    *b = temp;
    }
int Partition(int *array, int start, int end, size_t size)
{
    int i = start;
    int j;
    int pivot_value = array[end];
    for (j = start; j < end; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
	
	}

    }
   
    swap(&array[i], &array[end]);
    print_array(array, size);
    return i;
}


void QuickSort_recurtion(int *array, int start, int end,size_t size)
    {

        if(start < end)
        {
	  int pivot = Partition(array, start, end, size);
	  QuickSort_recurtion(array, start, pivot - 1, size);
	  QuickSort_recurtion(array, pivot + 1, end, size);
	    
        }
    }
void quick_sort(int *array, size_t size)
{
       if (array == NULL || size < 2)
         return;
       QuickSort_recurtion(array, 0, size - 1, size);
       
}
 
