#include<iostream>
using namespace std;
#include<array>


int main()
{
  system("cls");
  //empty() checks the size is size is zero the returns 1;
//   array<int,5> a{1};//={1};
//   cout<<a.empty();

//   if(a.empty())
//   {
//      cout<<"Array is empty"<<endl;
//   }
//   else
//   cout<<"Array is not empty\n";
array<int,0> myarray;
    if (myarray.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
    return 0;
}