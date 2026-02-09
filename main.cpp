#include <iostream>

int main() {
	int map[20][20] = { 0 };
	int headX = 9;
	int headY = 9;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i == 0 || i == 19 || j == 0 || j == 19)
			{
				map[i][j] = 1;
			}
		}
	}

	map[headX][headY] = 2;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (map[i][j] == 1)
				std::cout << '#';
			else if (map[i][j] == 2)
				std::cout << 'O';
			else if (map[i][j] == 0)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}