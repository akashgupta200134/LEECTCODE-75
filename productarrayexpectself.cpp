#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int total_product = 1;
    int zero_count = 0;

    // Count zeros and compute product of non-zero elements
   

  for(int i = 0 ; i < n ;i++){
    if(nums[i] == 0 ){
        zero_count++;
    }
    else{
        total_product  *= nums[i];
    }
  }


    vector<int>result(n,0);  // Initialize result with zeros

    if (zero_count > 1) {
        return result;  // More than 1 zero → all products are zero
    }



    for (int i = 0; i < n; i++) {

        if (zero_count == 0) {

            result[i] = total_product / nums[i]; // Normal division
        } 
        
        else if(nums[i] == 0) {
            result[i] = total_product;  // If single zero, only its index gets the product
        }
    }

    return result;
}

// Driver code
int main() {
    vector<int> nums = {1,2,3,4,0};
    vector<int> output = productExceptSelf(nums);

    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
