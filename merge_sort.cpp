#include <bits/stdc++.h>
using namespace std;
void merge_sort(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int arr_temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            arr_temp[k++] = arr[i++];
        else
            arr_temp[k++] = arr[j++];
    }

    for (; i <= mid; i++)
    {
        arr_temp[k++] = arr[i];
    }
    for (; j <= high; j++)
    {
        arr_temp[k++] = arr[j];
    }
}

int main()
{
    int array[10] = {24, 15, 26, 45, 74, 12, 41, 32, 52, 42};
    int n = 10;
    for (auto ele : array)
    {
        cout << ele << " ";
    }
    return 0;
}
