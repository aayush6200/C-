#include <iostream>
#include<vector>


int main(){
    // int a{10},b{20};
    // std::cout<<((a<b)?a:b);  // always use brackets to use conditional expressions

    // //below is for loop and range based for loop

    std::vector<int>numbers{1,2,3,4,5};

    //old for loop
    for (int i=0; i<numbers.size();i++){
        std::cout <<numbers[i] << std::endl;
    }

    //range based for loop over numbers
    for (auto i:numbers) {
        std::cout <<i<<" "; ;
    }

}

