#include <iostream>
using namespace std;

int main()
{
    int arr[] = {31, 41, 59, 26, 41, 58};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int key = 0;
    int j = 0;

    //Insertion Sort
    for(int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;

    }

    for(int l = 0; l < size; l++)
        cout<<arr[l]<<endl;

    return 0;
}

