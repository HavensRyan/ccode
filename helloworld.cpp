// hello.c
// compile gcc hello.c
// run ./a.out
#include <iostream>
using namespace std;

int main () {
  cout<<"ABCDEFGHJKLMNOPQRSTUVWXYZ"<<endl;
  cout<<"StevePi"<<endl;
  cout<<"ZULU"<<endl;
  for (int i = 0 ; i < 256 ; i++)cout<<(char)i;

  return 0;
}
