// functions that we can use with characters.
// must use <cctype> instead
//examples: isalpha, isalnum, isdigit, islower, isprint, ispunct etc...
//tolower returns lowercase of c
// to upper returns upper case of c


// C----> Styles strings: they use null termination for the end of the string



//declare C style string variables:

// char my_name[8] {"frank"};



// ------------------ C ++ String class --------------------------------
// is the class in STL
// while using  use #include<string> and std namespace


// example of using string in cpp is given below


#include <iostream>
#include<string>


int main(){
    std::string str;  // declares empty string

    std::cout<<"Enter your name: ";
    std::cin>>str;
    std::string s1{"frank"}, s2{"john"};   // frank


    std::cout<<"The entered ans declared strings are str: "<<str<< " s1: "<< s1<< " s2: "<< s2<<std::endl;
    



    return 0;
}


