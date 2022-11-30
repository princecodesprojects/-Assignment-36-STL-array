#include<iostream>
using namespace std;
#include<array>
#include<tuple>


int main()
{
  system("cls");
  array<int,5> a={1,2,3,4,5};
  
  cout<<"First "<<a.front()<<endl;
  cout<<"Last "<<a.back()<<endl;
    return 0;
}