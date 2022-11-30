#include<iostream>
using namespace std;
#include<array>
#include<tuple>


int main()
{
  system("cls");
  array<int,5> a={1,2,3,4,5};
a[0]=2;
  cout<<a.at(0)<<endl;
  cout<<"Size "<<a.size()<<endl;
  //for printing all the elements of the array
  for(int i : a)
  {
    cout<<i<<" ";
  }
    return 0;
}