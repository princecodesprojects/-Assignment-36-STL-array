#include<iostream>
using namespace std;
#include<array>



int main()
{
  system("cls");
  array<int,5> a={1,2,3,4,5};
  //cout<<*(a.rbegin())<<endl;
  //cout<<*(a.rend())<<endl;
  //rbegin() gives the address of last element
  //rend() gives the address of first element
  for(auto i=a.rbegin();i!=a.rend();i++)
  {
     cout<<*i<<" ";
  }
  cout<<endl;
   for(auto i=a.rend()-1;i!=a.rbegin()-1;i--)
  {
     cout<<*i<<" "<<endl;
  }
    return 0;
}