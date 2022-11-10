#include <iostream>

using namespace std;

/*
E        i , j , n
DE
CDE
BCDE
ABCDE
*/

int main() {

  int n;
  cin>>n;

  
  for(int i=1;i<=n;i++){

    char temp = 'A' + n -i;
   
    for (int j=1;j <=i;j++){
     
      cout<<temp;
      temp = temp + 1;
      
    }
    cout<<endl;
  }
  
}