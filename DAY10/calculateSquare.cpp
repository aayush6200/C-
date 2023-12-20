#include <iostream>
#include <vector>

// int calculate_square(int x){};
// std::vector<int> swap_values(int &x, int&y ){};
// int sort_array(int array){};
//calculates squares
int calculate_square(int x){
    return x*x;
}

//swap two numbers

std::vector<int>swap_values(int &x, int &y){
        int temp=x;
        x=y;
        y=temp;
        return std::vector<int>{x, y};
        
}
int main(){
    int x;
    int a,b;
    int arr[5] {1,2,3,4,5};
    std::cout<<"Enter a number that you want to square: "<<std::endl;
    std::cin>>x;
    std::cout<<"The square of "<<x<<" is "<<calculate_square(x)<<std::endl;
    std::cout<<"Below you will enter two numbers to swap: "<<std::endl;
    std::cout<<"Enter the first number to swap: "<<std::endl;
    std::cin>>a;
    std::cout<<"Enter the second number to swap :"<<std::endl;
    std::cin>>b;
    std::vector<int>k=swap_values(a,b);
    std::cout<<"The result after swapping two numbers is: "<<k[0]<<" and "<<k[1]<<std::endl;
    return 0;
}

