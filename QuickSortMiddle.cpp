#include<iostream>

void swap(int* a, int* b);

void quickSort(int arr[], int low, int high);

int main(void)
{
	//int unsorted[]{ 6, 5, 3, 1, 8, 7, 2, 4 };
	int unsorted[]{ 10, 7, 8, 9, 1, 5 };

	//Need to see hhow long this array is
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//Swaps a with b
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//This is where the magic starts. It takes arr as the array that needs to be sorted, the low index and the high index
//////////////////////////////////////////////////////////////////////////////////////////////////////
void quickSort(int arr[], int low, int high)
{
	//Show the world the array as it gets sorted
	for (int j = 0; j <= high; j++)
	{
		std::cout << arr[j] << " ";
	}
	std::cout << "" << std::endl;

	//l will be the lowest index. Need a new int because we will increase l
	//h will be the highest index. Need a new int because we will decrease h
	int l = low;
	int h = high;

	//the pivot will be the value at the middle index
	int pivot = arr[low + (high - low) / 2];

	//loop through the entire array while the values l & h have not crisscrossed
	while (l <= h)
	{
		//if arr[l] is less than the pivot we don't need to move it so we goto the next element up
		while (arr[l] < pivot)
		{
			l++;
		}
		//if arr[h] is greater than the pivot we do not need to move it so we goto the next element down
		while (arr[h] > pivot)
		{
			h--;
		}

		//finally found two values out of place. l has not criss crossed h so these values need a swappin'
		if (l <= h)
		{
			swap(&arr[l], &arr[h]);
			//go on to the next elements
			l++;
			h--;
		}
	}

	//haven't made it throught the entire array yet so we use recursion to do it again
	if (low < h)
	{
		quickSort(arr, low, h);
	}

	if (l < high)
	{
		quickSort(arr, l, high);
	}

}
