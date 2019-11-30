#include<iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout << "|||  MATRIX GENERATOR  |||" << endl << endl;
	cout << "Number of rows: "; cin >> rows;
	cout << "Number of columns: "; cin >> cols;

	int **tab = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		tab[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;

	system("pause");
	return 0;
}