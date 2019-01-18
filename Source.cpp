/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//EASY WAY TO FIND A MISSING NUMBER IN A SPECIFIED RANGE
//USED AN ARRRAY FIRST THEN A VECTOR
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<array>
#include<vector>

int main(void)
{
	
	int total = 0;
	//We know the number range so we add them up and stick the number in total
	for (int i = 0; i <= 10; i++)
	{
		total += i;
	}

	//Show the total
	std::cout << total << std::endl;
	
	//Here is the actual array. IIt is missing a 6
	std::array<int, 9> numbers{ 1, 2, 3, 4, 5, 7, 8, 9, 10 };
	
	int actualTotal = 0;
	//Add up all of the numbers in the array and stick the number in actualTotal
	for (int i = 0; i < numbers.size(); i++)
	{
		actualTotal += numbers[i];
	}

	//Show the world
	std::cout << actualTotal << std::endl;


	//Now if we get the difference tween the two numbers we will get the missing number. In this case 6
	std::cout << total - actualTotal << std::endl;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Same thing using a vector
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "Using a vectoor...." << std::endl;


	//Here is the actual vector. IIt is missing a 6
	std::vector<int> vecky{ 1, 2, 3, 4, 5, 7, 8, 9, 10 };

	//need to reset actual total to use it again
	actualTotal = 0;
	
	//Add up all of the numbers in the vector and stick the number in actualTotal
	for (int i = 0; i < vecky.size(); i++)
	{
		actualTotal += vecky.at(i);
	}

	std::cout << actualTotal << std::endl;

	//Now if we get the difference tween the two numbers we will get the missing number. In this case 6
	std::cout << total - actualTotal << std::endl;



	std::cout << "Press ENTER to continue...";
	std::cin.get();

	return 0;
}