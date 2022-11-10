#include <iostream>

using namespace std;

/*
A
BC
CDE
DEFG
*/

int main() {

  int n;
  cin>>n;

  
  for(int i=1;i<=n;i++){

    char temp = 'A' + i -1;
   
    for (int j=1;j <=i;j++){
     
      cout<<temp;
      temp = temp + 1;
      
    }
    cout<<endl;
  }
  
}