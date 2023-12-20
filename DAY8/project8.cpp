#include<iostream>
#include<string>
#include<vector>



//student grade calculator
// use functions and loops to calculate the grade of the students and their respective percentage


// void enter_grades(std::vector<int>){}; //function prototype for entering grades
// int calculate_percentage(std::vector<int>){};  //function prototype for calculating grade percentage
// int calculate_letter_grade(int){}; //function prototype for calculating grade letter : A, B ,C,...




void enter_grades(std::vector<int>students){
    int no_of_classes=0;
    int count=0;
    int grade;
    while (no_of_classes<=0) {
        std::cout<<"Please Enter the number of classes which grades you want to enter."<<std::endl;
        std::cin>>no_of_classes;

    }

    while (count<no_of_classes) {    
        std::cout<<"Please enter the grade for a "<<count<<" class."<<std::endl;
        std::cin>>grade;
        students.push_back(grade);
        count++;
    }
    for(auto grade : students){
        std:: cout<<"The grade are :" << grade<<std::endl;
    }

}



int main(){

    std::string name;
    std::vector<int> students_grades;  //stores the grades of the students
    
    //create a student name to calculate their respective percentage and grade
    std::cout<<"Enter you name: "<<name<<std::endl; 
    std::cin>>name;

    // lets ask students to enter their grades using the function 
    enter_grades(students_grades);

    return 0;
};

// void enter_grades(std::vector<int>students){
//     int no_of_classes;
//     int count=0;
//     int grade;
//     while (!no_of_classes) {
//         std::cout<<"Please Enter the number of classes which grades you want to enter."<<std::endl;
//         std::cin>>no_of_classes;

//     }

//     while (count<no_of_classes) {    
//         std::cout<<"Please enter the grade for a "<<count<<" class."<<std::endl;
//         std::cin>>grade;
//         students.push_back(grade);
//         count++;
//     }
//     for(auto grade : students){
//         std:: cout<<"The grade are :" << grade<<std::endl;
//     }

// }