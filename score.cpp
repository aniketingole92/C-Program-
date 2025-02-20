#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int score;
  cin >> score;
  if (score >= 100)
  {
      cout << "Century"<<endl;
  }
  else if (score >= 50){
      cout<<"Half Century"<<endl;
  }
  return 0;
}