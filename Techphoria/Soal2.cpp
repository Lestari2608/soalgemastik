#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int maxTeriakan(int posisi[1000][1000], int n)
{
	int a = 0, b = 0, tempA, tempB;

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			tempA = abs(posisi[i][0] - posisi[(j+1)][0]);
			tempB = abs(posisi[i][1] - posisi[(j+1)][1]);
			if (tempA > a) a = tempA;
			if (tempB > b) b = tempB;
		}
	}

	return max(a, b);
}

int main(int argc, char *argv[])
{
	int gajah;
	int posisi[1000][1000];

	cin >> gajah;

	for (int i = 0; i < gajah; i++)
	{
		cin >> posisi[i][0] >> posisi[i][1];
	}

	cout << maxTeriakan(posisi, gajah) << endl;
	
	return 0;
}