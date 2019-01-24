#include <iostream>
#include <algorithm>


void swap(int* a, int* b);
void quickSort(int arr[], int high, int low);
void highestLowest(const int arr[], int hiLo[], int length);

int main(void)
{
	int numbers[]{ 6, 3, 5, 4, 19, 8, 7, 32, 1, 68, 95, 84 };

	int length = sizeof(numbers) / sizeof(numbers[0]);

	for (int i = 0; i < length; i++)
	{
		std::cout << numbers[i] << " ";
	}

	std::cout << "" << std::endl;

	quickSort(numbers, 0, length - 1);

	for (int i = 0; i < length; i++)
	{
		std::cout << numbers[i] << " ";
	}

	std::cout << "" << std::endl;

	std::cout << "The high number is " << numbers[length - 1] << "." << " The low number is " << numbers[0] << "." << std::endl;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//FINDING THE HHIGHEST AND LOWEST NUMBER IN ARRAY WITHOUT SORTING FIRST
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int unsorted[]{ 68, 37, 19, 53, 49, 69, 51, 84, 98, 75, 27, 41, 78, 96, 23, 51, 15, 67, 75, 86, 66, 31, 87};

	int hiLo[]{ 0, 0 };

	int lengthUnsort = sizeof(unsorted) / sizeof(unsorted[0]);

	highestLowest(unsorted, hiLo, lengthUnsort);

	std::cout << "The high number is " << hiLo[1] << "." << " The low number is " << hiLo[0] << "." << std::endl;
	
	std::cout << "Press ENTER to continue...";
	std::cin.get();
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Swaps two integers
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Basic quicksort function that pivots around the middle element. Uses recursion.
//arr -> the array to sort
//low -> the index to start tht is lower than pivot
//high -> the index to start tht is higher than pivot
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void quickSort(int arr[], int low, int high)
{
	//need to mark the lowest and highest index because we will move lo and hi
	int lo = low;
	int hi = high;
	
	//the value we will pivot arouind
	int pivot = arr[low + (high - low) / 2];

	//while lo and hi have not criss crossed we need to check the array
	while (lo <= hi)
	{
		//if the value is lower than the pivot we increase lo
		while (arr[lo] < pivot)
		{
			lo++;
		}

		//if the value is greater than the pivot  we decrease hi
		while (arr[hi] > pivot)
		{
			hi--;
		}

		// we got to elements we need to switch and lo and hi have not crisscrossed
		if (lo <= hi)
		{
			//swap the elements and adjust lo and hi
			swap(&arr[lo], &arr[hi]);
			lo++;
			hi--;
		}
	}

	//use recursion until we have checked the entire array
	if (low < hi)
	{
		quickSort(arr, low, hi);
	}

	if (lo < high)
	{
		quickSort(arr, lo, high);
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//THis function figures out the higheest and lowest value in an  array
//arr[] -> the array we want to get the highest and lowest value from
//hiLo[] -> the array we will storee the highest and lowest value in. LOW goes in hiLO[0]. HIGH goes in hiLO[1]
//length -> the length of arr[]
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void highestLowest(const int arr[], int hiLo[], int length)
{
	//Set the first two elements to the first element of arr so we have something to compare 
	hiLo[0] = arr[0];
	hiLo[1] = arr[0];

	//compare every element in arr with the elements in hiLo. If the value is higher or lower we stick it in hiLo
	for (int i = 0; i < length; i++)
	{
		//IF THE CURRENT ELEMENT AOF ARR IS LOWER THAN THE Lowest we have to put it in hiLO
		if (arr[i] < hiLo[0])
		{
			hiLo[0] = arr[i];
			//if we are in here there is no need to check if this is a high value so we continue to the next element
			continue;
		}

		//ifthe current element is higher than the highest we have to put it in hiLo
		if (arr[i] > hiLo[1])
		{
			hiLo[1] = arr[i];
		}
	}


}

