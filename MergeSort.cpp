#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int i, j, k;
    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l+i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m+j+1];

    i = 0; j = 0; k = l;
    while(i < n1 && j < n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;

        }

        else if(L[i]>R[j])
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void Mergesort(int arr[], int l_i, int u_i)
{
    if(l_i < u_i)
    {
        //cout<<"MergeSort"<<endl;
        int m_i = (l_i + u_i) / 2;
        Mergesort(arr, l_i, m_i);
        Mergesort(arr, m_i+1, u_i);
        merge(arr, l_i, m_i, u_i);

    }

}


int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(int a = 0;  a < n; a++)
    {
        cout<<arr[a]<<" ";
    }

    cout<<endl;

    Mergesort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        //cout<<"lol"<<endl;
        cout<<arr[i]<<" ";
    }

    return 0;
}