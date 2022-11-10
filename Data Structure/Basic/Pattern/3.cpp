#include <iostream>

using namespace std;

/*
1
21
321
4321
*/

int main() {

  int n;
  cin>>n;

  
  for(int i=1;i<=n;i++){

    int temp = i;
    for (int j=1;j <=i;j++){

      cout<<temp;
      temp--;
      
    }
    cout<<endl;
  }
  
}