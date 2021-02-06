#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void output_sorted(std::vector<int> &nums){
    std::vector<int> sorted_copie = nums;
    for(int i = 1;i < sorted_copie.size();i++){
        int x = sorted_copie[i];
        int j = i;
        while(abs(sorted_copie[j-1]) > abs(x) && j > 0){
            sorted_copie[j] = sorted_copie[j-1];
            j--;
        }
        sorted_copie[j] = x;
    }
    for(int i = 0;i < sorted_copie.size();i++)
        cout << sorted_copie[i] << " ";
}

int main(){
    std::vector<int> nums = {-100, -50, -5, 1, 10, 15};
    output_sorted(nums);
    cout << endl;
    return 0;
}
