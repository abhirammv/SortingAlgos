#include <iostream>
#include <vector>
using namespace std;

void Fibonacci(int n)
{
    vector<int> arr(n);
    arr[0] = 0;
    arr[1] = 1;

    cout<<arr[1]<<endl;
    for(int i = 2; i<=n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        cout<<(arr[i])<<" "<<endl;
    }

}

int main()
{
    Fibonacci(10);
    return 0;
}