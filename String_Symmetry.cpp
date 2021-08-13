#include <iostream>
#include <string>

int main()
{
	int n;
	do
	{
		std::cout << "Enter N: ";
		std::cin >> n;
	}while(n < 1 || n > 10);
	
	std::string* array = new std::string[n];
	int* step = new int[n];	

	for(int i{ 0 }; i < n; ++i)
	{
		std::cout << "enter string [" << i + 1 << "]: ";
		std::getline(std::cin >> std::ws, array[i]);
	}

	std::cout << std::endl; 
	for(int i{ 0 }; i < n; ++i)
	{
		std::cout << "String entered [" << i + 1 << "]: ";
		std::cout << array[i] << std::endl;
	}
	
	for(int i{ 0 }; i < n; ++i)
	{
		for(int j{ 0 }; j < (array[i].length() / 2); ++j)
		{
			step[i] += abs(array[i][j] - array[i][array[i].length() - j - 1]);
		}
	}
	
	std::cout << "\nNumber of steps: " << std::endl;
	for (int i{ 0 }; i < n; ++i)
	{
		std::cout << step[i];
		std::cout << std::endl;
	}
	
	delete[] step;
	delete[] array;
	return 0;
}
