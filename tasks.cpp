#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void sort(std::vector<int> &nums){
    for(int i = 1;i < nums.size();i++){
        int x = nums[i];
        int j = i;
        while(j > 0 && abs(nums[j-1]) > abs(x)){
            nums[j] = nums[j-1];
            j--;
        }
        nums[j] = x;
    }
}

int main(){
    std::vector<int> nums = {-100, -50, -5, 1, 10, 15};
    sort(nums);
    for(int i = 0;i < nums.size();i++)
            cout << nums[i] << " ";
    cout << endl;
    return 0;
}
