#include <iostream>
#include<vector>
#include<algorithm>
using namespace std; 


int  findsmallest( vector<int>arr, int n , int k ){


 if( k >= n){
        return -1 ;
    }
    sort(arr.begin() , arr.end()); 
           
    return arr[k-1];
    

    }








int main(){

    vector<int> arr = {7,10,4,3,20,15};
    int n = arr.size(); 
    int k = 1;

 
   int ans =  findsmallest(arr, n, k);
  
   cout << ans << endl ;


    return 0 ;



}
