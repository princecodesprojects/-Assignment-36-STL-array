#include<iostream>
using namespace std;
#include<array>
#include<tuple>


int main()
{
  system("cls");
  int n;
  array<int,5> a={1,2,3,4,5};
  cout<<"Enter index to get number ";
  cin>>n;
  cout<<"Element at "<<n<<" is "<<a.at(n)<<endl;
  cout<<get<0>(a);
    return 0;
}