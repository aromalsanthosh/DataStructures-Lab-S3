// Binary Search in C

#include <stdio.h>
void bubbleSort(int arr[], int n);

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int arr[100],n,key;

	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\nEnter the elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the number that has to be searched : ");
	scanf("%d", &key);

  bubbleSort(arr,n);

  
  int result = binarySearch(arr, key, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("\nElement is found at position %d", result+1);
  return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    
    // print the sorted array
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}


