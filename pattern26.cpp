/*
       1
      121
     12321
    1234321

*/



#include<iostream>
using namespace std;
int main(){

    int n,i=1;
    cin>>n;
    while(i<=n){

        // space print krwa lete hain pehle

        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=i){

            // First triangle print krwa lete hain

            cout<<j;
            j=j+1;
        }


            // sceond triangle

            int start= i-1;
            while(start){
                cout<<start;
                start=start-1;
            }
    cout<<endl;
    i=i+1;
  
    }


}