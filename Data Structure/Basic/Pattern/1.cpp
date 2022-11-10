#include<iostream>

using namespace std;

int main(){


// *            0
// * *          1
// * * *        2
// * * * *      3

// number of row = 4
// 4 row --  4 col 

// number of rows = 4



for (int i = 1; i <=4; i++){

    for (int j = 1; j <= i; j++ ){

        cout<<"*"<<" ";
        
    }
    
    cout<<"\n";

}


return 0;
}


