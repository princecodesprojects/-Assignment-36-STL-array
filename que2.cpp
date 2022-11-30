#include<iostream>
using namespace std;
#include<array>
#include<tuple>


int main()
{
  system("cls");
  array<int,5> a={1,2,3,4};
  int c=0;
  cout<<a.max_size()<<endl;
  cout<<"Size "<<a.max_size()<<endl;
  
  for(auto i=a.begin(); i!=a.end();i++)
  {
    c++;
  }
  cout<<"Size is "<<c<<endl;

    return 0;
}