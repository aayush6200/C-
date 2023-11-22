#include <iostream> // using preprocessor directives 

float get_area(float x, float y){
    return x*y;
}
int main(){
    float l;
    float b;
    std::cout << "Enter the length of rectangle: ";
    std::cin>>l;
    std::cout << "Enter the width of the rectangle: ";
    std::cin>>b;
    float area=get_area(l,b);
    std::cout <<"The area of a rectangle is "<< area << std::endl;
    return 0;

}


