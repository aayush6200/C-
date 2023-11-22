#include<iostream>  //preprocessor directives


int main(){
    int x;
    int y;
    char op;
    std::cout <<"Enter first number" << std::endl;
    std::cin>> x ;
    std::cout <<"Enter an  operator" << std::endl;
    std::cin>> op;
    std::cout <<"Enter second number" << std::endl;
    std::cin>> y;

    if(op=='+'){
        int add=x+y;
        std::cout <<"The result is " << add << std::endl;
    }
    else if (op=='-'){
        int subtract=x-y;
        std::cout <<"The result is " << subtract <<std::endl;
    }
    else if (op=='*'){
        int multiply=x*y;
        std::cout <<"The result is" << multiply << std::endl;
    }
    else if (op=='/'){
        int divide=x/y;
        std::cout <<"The result is" << divide << std::endl;
    }
    else{
        std::cout <<"Error. Please check your input file." << std::endl;
    }


}
