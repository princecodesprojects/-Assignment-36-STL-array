#include<iostream>
using namespace std;
#include<array>;
#include<algorithm>
#include <bits/stdc++.h>


int main()
{
  system("cls");
  int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr[0])<<endl;
    cout<<n<<endl;
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted or first index+number of elemts to be sorted*/
    sort(arr, arr + n);
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
}