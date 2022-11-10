#include <iostream>

using namespace std;

/*
   1
  23 2
 345 43
4567 654
*/


int main() {

  int n;
  cin>>n;

  int temp=n;

  for(int i=1;i<=n;i++){
    int t1 = i,t2 = 1;
    for (int j = temp; j>1; j--){
      cout<<" ";
    }
   
    for (int j=1;j<=i;j++){

      cout<<t1;
      t1++;
      
    }

    for (int j=2;j<=i;j++){

     cout<<t1 -2;
     t1--;
    
    }

    cout<<endl;
    temp--;
   

    }
  
}