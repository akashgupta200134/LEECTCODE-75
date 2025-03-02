#include<iostream>
#include<vector>
using namespace std;


vector<bool>kidswithmaxcandy(int arr[] , int extra , int n){
    vector<bool>ans ; 
    int maxi = -1; 

    for(int i= 0 ; i < n ; i++){
        
         maxi = max(maxi , arr[i]);
    }



    for(int i = 0 ; i < n ; i++){

        if(arr[i] + extra >= maxi){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }

    return ans;


}





int main(){
   
    int arr[] = {2,3,5,1,3}; 
     
    int extra = 3; 
int n = sizeof(arr)/sizeof(arr[0]);
vector<bool>result = kidswithmaxcandy(arr, extra, n) ; 

for(int i = 0 ; i < result.size() ; i++){
    if(result[i]){
        cout << "true" ;
  
    }
    else{
        cout << "false"; 
    }

   cout << endl ;
}
  
}