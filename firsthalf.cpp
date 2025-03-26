#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>findhalf (vector<int>arr , int n ){
  

    int firsthalf = 0 ; 
    int secondhalf = 0 ; 
    for(int i = 0 ; i < n/2 ; i++){
       
        firsthalf = firsthalf + arr[i] ;


    }

    for(int j = n/2 ;  j < n ; j++){
        secondhalf =secondhalf + arr[j] ;
    }

    if(firsthalf < secondhalf){

      reverse(arr.begin() , arr.end());
    }

   return arr ; 
    


 }



int main(){

 vector<int>arr = {1,2,3,10,20,30} ; 
 int n = arr.size(); 


 vector<int>ans = findhalf(arr, n); 

 for(int i = 0 ; i < ans.size();  i++){
    cout << ans[i] << endl ;
 }
    


return 0 ;


}