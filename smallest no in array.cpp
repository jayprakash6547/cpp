#include <bits/stdc++.h>
using namespace std;
 int smallest(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > min)
            min = arr[i];
    return min;
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "smallest in given array is "
         <<smallest(arr, n);
    return 0;
}
 
