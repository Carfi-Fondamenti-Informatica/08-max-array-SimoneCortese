#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int A;
  cin>>A;
  float num[A];
  for (int i=0;i<A;i++){
      cin>>num[i];
  }
  cout<<funzione(num,A);
  return 0;
}
