#include<iostream>
using namespace std ; 

int main(){
 
    int lower = 10 ; 
    int upper = 10; 
        int ans = 0;
    for(int i = lower ; i <= upper ; i++){
         ans = ans + i*i*i;
    }
    cout << ans << endl;

}