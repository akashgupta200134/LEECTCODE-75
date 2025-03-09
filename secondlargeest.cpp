#include<iostream>
#include<climits>
using namespace std; 


int secondmax(int arr[] , int n){
 
    int max = INT_MIN; 
    int second = INT_MIN;

     for(int i = 0 ; i < n ; i++){
            
        if(arr[i] > max){
            second = max;
            max= arr[i]; 

        }
        else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }

    }
return second;


}






int main(){

    int arr[] = { 1,8, 9, 6 ,-9,3} ; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int result  = secondmax(arr, n);
    cout << result << endl ;

    return 0 ;
}