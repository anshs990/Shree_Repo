#include <iostream>

using namespace std;

/*
 A     i = 1
 BB    i = 2
 CCC   i = 3
*/

int main() {

  int n;
  cin>>n;

  
  for(int i=1;i<=n;i++){

    char temp = 'A' + i -1;
   
    for (int j=1;j <=i;j++){
     
      cout<<temp;
      
    }
    cout<<endl;
  }
  
}