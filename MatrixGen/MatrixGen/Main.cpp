#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	cout << "|||  MATRIX GENERATOR  |||" << endl << endl;

	while (true)
	{
		int rows, cols;
		cout << "Number of rows: "; cin >> rows;
		cout << "Number of columns: "; cin >> cols;
		cout << endl;

		int** tab = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			tab[i] = new int[cols];
		}

		srand(time(NULL));
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				tab[i][j] = rand() % 20 - 10;
				cout.width(3);
				cout << right << tab[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		for (int i = 0; i < rows; i++)
		{
			delete[] tab[i];
		}
		delete[] tab;
	}
	
	system("pause");
	return 0;
}