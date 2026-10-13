#include <iostream>
using namespace std;

int main ()
{

    int n;
    cout << "enter the array size: ";
    cin >>n;

    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered elements are : ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;

    int sum =0;
    int avg=0;

    for (int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "the sum of the elements : "<<sum<<endl;

    avg = sum / n;
    cout << "the average of the elements: "<<avg<<endl;

}
