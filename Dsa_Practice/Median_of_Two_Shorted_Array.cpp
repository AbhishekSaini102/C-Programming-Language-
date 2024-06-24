#include <iostream>
using namespace std;

void printArray(int arr[], int left, int right)
{
	for (int i = left; i <= right; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int arr[], int left, int mid, int right)
{

	int n1 = mid - left + 1;
	int n2 = right - mid;

	int temparr1[n1]; // temp array
	int temparr2[n2];

	for (int i = 0; i < n1; i++)
	{
		temparr1[i] = arr[left + i];
	}
	for (int i = 0; i < n2; i++)
	{
		temparr2[i] = arr[mid + 1 + i];
	}

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2)
	{
		if (temparr1[i] <= temparr2[j])
		{
			arr[k] = temparr1[i];
			i++;
			k++;
			cout << arr[k] << " ";
		}

		else
		{
			arr[k] = temparr2[j];
			k++;
			j++;
			cout << arr[k] << " ";
		}
		cout << endl;
	}
	while (i < n1)
	{
		arr[k] = temparr1[i];
		k++, i++;
	}
	while (j < n2)
	{
		arr[k] = temparr2[j];
		k++, j++;
	}
}

void mergeSort(int arr[], int left, int right)
{

	if (left < right)
	{
		int mid = left + ((right - left) / 2);
		mergeSort(arr, left, mid);
		printArray(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		printArray(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

int main()
{

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{

		cin >> arr[i];
	}
	mergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{

		cout << arr[i];
	}
	return 0;
}
