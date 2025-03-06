#include<iostream>
using namespace std ;


int main(){

    int arr[] ={1,2,3,4,5}; 
     
    int n = sizeof(arr)/sizeof(arr[0]); 

// this is way to find the subarrays in O(n3) time complexity
    for(int start = 0 ; start <= n ; start++){

        for(int end = start ; end <= n ; end++){
              
            for(int k = start ; k < end ; k++){
                cout << arr[k] ;
               

            }
 cout << " " ;
        }
cout << endl ;
    }

return 0 ;
}