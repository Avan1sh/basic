#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;
    
    void insert(int data)
    {
        size += 1;
        int index = size;
        arr[index] = data;
        while (index > 1)
        {
            int parrent = index/2;
            if (arr[index] > arr[parrent])
            {
                swap(arr[index], arr[parrent])
            }
            else return;
        }
    }

    void deletefromheap()
    {
        if (size == 0)
            return;
        arr[1] = arr[size];
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < size && arr[left] > arr[i])
            {
                swap(arr[left], arr[i]);
            }
            else if (right < size && arr[right] < arr[i])
            {
                swap(arr[right], arr[i]);
            }
        }
        else return;
    }
   
    void heapfiy(arr[], int n, int i){

        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left < n && arr[largest] < arr[left])
            largest = left;
        if (right < n && arr[largest] < arr[right])
            largest = right;

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapfiy(arr, n, largest);
        }
    }

    void heapsort(arr, int n)
    {
        int size = n;
        while (size > 1)
        {
            swap(arr[size], arr[1]);
            size--;
            heapfiy(arr, size, 1);
        }
    }
}