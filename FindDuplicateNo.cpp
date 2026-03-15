#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 7, 4, 9, 2};
    int n = 6;

    cout<<"Duplicate numbers are: ";

    for(int i=0;i<n;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            count++;
        }

        if(count > 1)
        {
            cout<<arr[i]<<" ";
            arr[i] = -1;   // mark printed duplicate
        }
    }

    return 0;
}