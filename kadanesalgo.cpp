#include<iostream>
#include<vector>
using namespace std;



int maxsumofSubaaray(vector<int>arr){

    int sum = 0 ; 
    int maxi =  arr[0]; 

    for(int i = 0 ; i < arr.size() ; i++){

        sum = sum + arr[i]; 
         
      maxi = max(maxi , sum); 

       if(sum < 0 ){
        sum = 0 ;
       }
        


    }

    return maxi ; 


}


int main(){

    vector<int>arr = {1,2,6,8,-4,6,-3,-2};

    int ans = maxsumofSubaaray(arr);

    cout << ans << endl ;


return 0 ;

}