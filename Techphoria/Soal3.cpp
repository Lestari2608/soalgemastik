#include <iostream>

using namespace std;

int maxKeindahan(int data[510][510], int n, int M)
{
	int max = data[0][0], temp, iterate = (n-M)+1;

	for (int i = 0; i < iterate; i++)
	{
		for (int j = 0; j < iterate; j++)
		{
			temp = 0;
			p = j;
			for (int k = i; k < i+iterate; k++)
			{
				for (int l = j; l < j+iterate; l++)
				{
					temp += data[k][l];
					cout << data[k][l] << " ";
				}
				cout << endl;
			}
			if (temp > max)
			{
				max = temp;
			}
		}
	}

	return max;
}

int main(int argc, char *argv[])
{
	int n, M;
	int data[510][510];

	cin >> n >> M;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> data[i][j];
		}
	}

	cout << maxKeindahan(data, n, M) << endl;
	
	return 0;
}