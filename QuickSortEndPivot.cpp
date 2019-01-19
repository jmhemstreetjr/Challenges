///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Basic quicksort algorithym that pivots around the last element in the array
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<array> 


void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main(void)
{
	
	int unsorted[]{ 6, 5, 3, 1, 8, 7, 2, 4 };
	
	//int unsorted[]{ 10, 7, 8, 9, 1, 5 };

	int highIndex = (sizeof(unsorted) / sizeof(unsorted[0])) - 1;

	quickSort(unsorted, 0, highIndex);

	//Show the world our beautiful array.
	for (int i = 0; i <= highIndex; i++)
	{
		std::cout << unsorted[i] << " ";
	}

	std::cout << "" << std::endl;

	std::cout << "Press ENTER to continue...";
	std::cin.get();

	return 0;
}

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// partition uses the last element as the pivot. Everthing smaller goes to the left and everything bigger goes to the right
int partition(int arr[], int low, int high)
{
	//set the pivot.. last index in the array
	int pivot = arr[high];     
	//get the index of the smaller element
	int smallIndex = (low - 1); 

	for (int i = low; i <= high - 1; i++)
	{
		// If current element is smaller than or equal to pivot we can move the index up and swap
		if (arr[i] <= pivot)
		{
			smallIndex++;    // increment index of smaller element 
			swap(&arr[smallIndex], &arr[i]);
		}
	}
	
	swap(&arr[smallIndex + 1], &arr[high]);
	
	return (smallIndex + 1);
}

/*/implements QuickSort using recursion
arr[] -- > Array to be sorted,
low-- > Starting index,
high-- > Ending index */
void quickSort(int arr[], int low, int high)
{
	//Show the world the array as it gets sorted
	for (int j = 0; j <= high; j++)
	{
		std::cout << arr[j] << " ";
	}
	std::cout << "" << std::endl; 
	

	if (low < high)
	{
		//* pivotIndex is partitioning index, arr[p] is now at right place
		int pivotIndex = partition(arr, low, high);

		// Separately sort elements before partition and after partition 
		quickSort(arr, low, pivotIndex - 1);
		quickSort(arr, pivotIndex + 1, high);
	}
}