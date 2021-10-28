#include <iostream>
#define N 100
#define M 100

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int max_pr = 1;
	int num = 0;

	int matrix[N][M];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) // считываем матрицу
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];

	for (int i = 0; i < m; i++) // считаем произведение элементов столбцов
	{
		int pr = 1;
		for (int j = 0; j < n; j++)
		{
			pr *= matrix[j][i];
			if (pr > max_pr) // ищем максимальное произведение
			{
				max_pr = pr;
				num = i;
			}

		}
	}
	/*cout « max_pr;*/
	for (int i = 0; i < n; i++)
		matrix[i][num] = matrix[i][num] - 3;
	for (int i = 0; i < n; i++) // выводим результат
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";

		cout << endl;
	}

}