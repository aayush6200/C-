#include <iostream>
#include <vector>
#include<string>
#include<unordered_map>

std::unordered_map<std::string,std::vector<std::string>>hashmap;

class Student{
    public:
    int add_student(std::string name, int id){
        std::vector<std::string>student;
        if(hashmap.find(id)==hashmap.end()){
                student.push_back(name);
                hashmap[id]=student;

            
        }
        else{
             std::cout<<"The student with the given id is already added."<<std::endl;

        }
        get_all_students();
       


    
    };
 
    int remove_student(int id){
        // will remove the student 
        hashmap.erase(id);
        std::cout<<"The student with the given id is removed."<<std::endl;



    };
    int get_student(int id){
        // this function shall help us to get the student 
        std::cout<<"Here is the student with the given id."<<std::endl;

    };
    void get_all_students(){
        for(auto & x:hashmap){
         std::cout << x.first<<"->" ;
         for(auto &y:x.second){
            std::cout<<y<<std::endl;
         }

        }
        std::cout<<'\n';
    };

    private:
        std::unordered_map<int, std::vector<std::string>> hashmap;

};



// we will create a student class 
// create add method to add student record to the class
// create delete method to delete student record from the class
// create a method to show the info of the specific student


// class Student : 
//     public


int main(){
    Student obj1;
    std::string name;
    int id;
    std::cout<<"Enter the name of the student"<<std::endl;
    std::cin>>name;
    std::cout<<"Enter the id of the student"<<std::endl;
    std::cin>>id;
    obj1.add_student(name,id);


    return 0;
}
