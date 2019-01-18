////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FIND THE DUPLICATE NUMBER IN AN UNSORTED GROUP OF ELEMENTS
//USED AN ARRAY AND THEN USED VECTOR 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include <array>
#include <vector>

int main(void)
{

	std::array<int, 10> numbers{ 1, 2, 3, 4, 5, 6, 2, 7, 5, 8 };
	
	
	//check each element against the all of the other elements in the array
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = (i + 1); j < numbers.size(); j++)
		{
			//if we get a match we set it to null
			if (numbers[i] == numbers[j])
			{
				numbers[j] = NULL;
			}
		}
	}

	//show the world what we got
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] != NULL)
		{
			std::cout << numbers[i];
		}
	}
	 
	std::cout<< "" << std::endl;


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Do the same thing just with a vector
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "Using vectors......." << std::endl;

	std::vector<int> numba{ 1, 2, 3, 4, 5, 6, 2, 7, 5, 8};

	//check each element against the all of the other elements in the vector
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = (i + 1); j < numba.size(); j++)
		{
			//if we get a match we can kill it
			if (numba.at(i) == numba.at(j))
			{
				numba.erase(numba.begin() + j);
			}
		}
	}


	//show the world what we got
	for (int i = 0; i < numba.size(); i++)
	{
		std::cout << numba.at(i);
	}

	std::cout << "" << std::endl;

	std::cout << "Press ENTER to continue....";
	std::cin.get();

	return 0;
}