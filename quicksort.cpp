#include <iostream>
using namespace std;
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while(i <= j)
    {
        while(i <= high && a[i] <= pivot)
            i++;
        while(a[j] > pivot)
            j--;
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}
void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}
int main()
{
    int a[] = {40,20,10,80,60,50,7,30,100};
    int n = 9;
    quickSort(a, 0, n - 1);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}