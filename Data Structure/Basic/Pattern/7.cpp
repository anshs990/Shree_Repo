#include <iostream>

using namespace std;

/*
          n    s    i    j    
***1      4    3    1    [temp -> 1] , [0 -> i]
**12      4    2    2
*123      4    1    3
1234      4    0    4
*/


int main() {

  int n;
  cin>>n;

  int temp =n;
  for(int i=1;i<=n;i++){

    for (int j=temp; j >1;j--){ 

       cout<<" ";
    
    }
   
    for (int j=1;j <=i;j++){

        cout<<j;
    
    }

    cout<<endl;
    temp--;

    }
  
}