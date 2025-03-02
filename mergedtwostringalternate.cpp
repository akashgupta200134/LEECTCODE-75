#include<iostream>
#include<string>
using namespace std; 


string merged(string str1 , string str2 ){
    int n = str1.length();
      int m = str2.length();
      string ans = "" ;
      
 
      int i = 0 ;
      int j = 0 ;
      
      
      while( i < n || j < m ){
          if(i < n ){
              ans= ans+str1[i];
              i++;
          }
          
          if(j< m){
              ans= ans+str2[j];
              j++;
          }
          
          
      }




return ans ;



}





int main(){
    string str1 = "abc"; 
    string str2 = "pqr"; 
      
   

     
    string result =  merged(str1, str2);
    cout << result << endl ;

return 0 ;
}