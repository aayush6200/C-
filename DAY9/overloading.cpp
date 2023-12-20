#include <iostream>



// we will learn about the function overloading
// function overloading is the important aspect of polymorphism

// it means considering the input of the function, argument, C uses the overloading concept

int calculate(int a, int b){
    return a+b;
};
int calculate(int a, int b,int c){
    return a+b+c;
};
int calculate(int a, int b, int c, int d){
    return a+b+c+d;
};



int main(){
    // execution of the function overloading
    std::cout<<"The ouput with two inputs "<<calculate(1,2)<<std::endl;
    std::cout<<"The ouput with three inputs "<<calculate(1,2,3)<<std::endl;
    std::cout<<"The ouput with four inputs "<<calculate(1,2,3,4)<<std::endl; 
    return 0;
}
