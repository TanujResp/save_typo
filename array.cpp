#include <bits/stdc++.h>
using namespace std;
int main()
{

	int arr[] = {1, 2, 4, 5, 6, 7, 8, 9};

	int count = 1;
	int max = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (auto i = 0; i < size - 1; i++)
	{
		if (abs(arr[i + 1] - arr[i]) == 1)
		{
			count++;
		}

		else
		{

			count = 1;
		}

		if (count > max)
		{
			max = count;
		}
	}

	cout << max;
}