#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
//#include <bits/stdc++.h>
int main()
{
  system("cls");
  int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr[0])<<endl;
    cout<<n<<endl;
    //sorting in descending order
    sort(arr, arr + n,greater<>());
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
}