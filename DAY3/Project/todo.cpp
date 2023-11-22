#include<iostream>
#include<vector>
#include<string>


// the program below will be the todo list 
// for every task user will do, the function will be created
std::vector<std::string> task_list;
class TodoList{
    public:
    int add_task(std::string task_name){
        task_list.push_back(task_name);
        return 0;
    }
    int delete_task(){
            int user_input;
            for(int i=0; i<task_list.size(); i++){
                std::cout<<"Press "<<i<<" to delete task "<<task_list[i]<<std::endl;
            }
            std::cin>>user_input;
           
                task_list.erase(task_list.begin()+user_input);
                std::cout<<"Task deleted successfully, below are th updated tasks"<<std::endl;

            // }
            // catch(std::exception){
            //     std::cout<<"There seems to be an error "<< exception<<std::endl;
            // }
    }
    int get_all_tasks(){
         for(int i=0; i<task_list.size(); i++){
                std::cout<<task_list[i]<<std::endl;
            }

    }
    // encapsulation 
    private:
        int view_task(){
            for(int i=0; i<task_list.size(); i++){
                std::cout<<task_list[i]<<std::endl;
            }
        }

};



int main(){
    
    TodoList obj1;
    std::cout<<"Hello! Welcome to your Todolist app"<<std::endl;
    std::cout<<"Please press 1 to add tasks, 2 to delete task and 3 to view all the remaining tasks"<<std::endl;




    return 0;
}

