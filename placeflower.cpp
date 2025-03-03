#include<iostream>
using namespace std ; 

 
bool placeflower(int arr[] , int n ){
     
    bool canplaceflower = false;
   
    for(int i = 0 ; i < n ; i++){


        if(arr[i] == 0){

        bool leftside = ( i == 0 || arr[i-1] == 0 );
        bool rightside = (i == n-1 || arr[i+1] == 0 );

       if( leftside && rightside){
           arr[i] = 1 ;
           canplaceflower = true;
         i++;
       }

        }
    
    

    }

  return canplaceflower;


}





int main(){
 
    int arr[] = {1,0,0,1 ,0,0,0,0,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

  

    
     bool result = placeflower(arr, n ); 

     if(!result){
        cout << "false" << endl ;
     }
     else{
        cout << "true" << endl ;
     }

       return  0 ;



}