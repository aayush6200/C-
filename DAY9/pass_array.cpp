#include<iostream>
#include <vector>

// in this method we will pass the array to the functions 
// -> when we pass array to the function we will the array memory location is passed instead
// so we have to keep track of the index of the array by ourself
// this helps to interact directly with the memory location


void print_array(const std::vector<int>arr){
    for(auto i:arr){
        std::cout<<i<<std::endl;

    }
};

void set_array(std::vector<int>arr){};
int main(){
    std::vector<int> array= {1,2,3,4,5};
    print_array(array);
    return 0;
}