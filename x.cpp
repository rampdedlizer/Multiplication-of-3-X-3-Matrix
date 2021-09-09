#include<iostream>

int main()

{
	int a1[5][5];
	int b1[5][5];
	int c1[5][5];
	const int r = 3;//row
	const int c = 3;//column
	
	//inputting the data

	std::cout << "MATRIX I" << std::endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			std::cin>>a1[i][j];
	}

	
	std::cout << "MATRIX II" << std::endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			std::cin >> b1[i][j];
	}
	//Multiplication
	for (int i = 0; i < r; i++)
	{
		
		for (int j = 0; j < c; j++)
		{
			int sum = 0;
			for (int k = 0; k < r; k++)
			{
				sum = sum + a1[i][j] * b1[k][j];
				c1[i][j] = sum;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << c1[i][j] << "  ";
		}
		std::cout << "" << std::endl;
	}
}
