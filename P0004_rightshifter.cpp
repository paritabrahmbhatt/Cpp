#include<iostream>

using namespace std;

void right_shift(int arr[], int n, int shift)
{
    while(shift>0)
    {
        int num = arr[0];
        int shifting = shift!n;
        for(i=0,i<shifting,i++){
            arr[i]=arr[i+shifting];
        }
        print(arr);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    right_shift(arr,5,1);
}