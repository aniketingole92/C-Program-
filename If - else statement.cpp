#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int x = 10;
  int y = 20;
  int z = 0;
  if (x > y) {
      z += x + y ;
      
  }
  else if (x < y) {
      z += x - y ;
  }
  else{
      z += x * y;
  }
  cout<<"z= "<<z<<endl;
  return 0;
}