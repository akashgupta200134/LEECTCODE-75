#include<iostream>
#include<string>
using namespace std; 

void lowertouppercase(char arr[]  , int n){

for(int i = 0 ; i < n ; i++){
    if(arr[i] != ' ' && arr[i] >='a' && arr[i] <='z'){

        arr[i] = arr[i] - 'a' + 'A';

    }

}
    

 
  
}





int main(){
 
  char arr[] = "my name is akash";
     int n = sizeof(arr)/sizeof(arr[0]);
        
     lowertouppercase( arr, n);
         
     cout << arr << endl ;
     return 0;

}