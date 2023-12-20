#include<iostream>
#include<vector>
#include<string>



/// this class helps to create a bank account class user
class BankAccount{
    private:
    public:
    void add_user(){
        std::cout<<" User already on a bank system."<<std::endl;
        std::cout<<" newUser added to bank system."<<std::endl;
    }

    void deposit_money(){
        
        std::cout<<"amount cannot be negative or zero. Please..."<<std::endl;
        std::cout<<"account number does not match. Please try again later"<<std::endl;
        std::cout<<"Money deposited into the banking system."<<std::endl;

    }
    void transfer_money(){
        
        std::cout<<"amount cannot be negative or zero. Please..."<<std::endl;
        std::cout<<"Amount you are trying to send is exceeds the current amount you have in you bank account "<<std::endl;
        std::cout<<"account number does not match. Please try again later"<<std::endl;
        std::cout<<"Money into the destination."<<std::endl;

    }
    void delete_user(){
        std::cout<<" user deleted from a banking system."<<std::endl;
        std::cout<<" user you want to delete does not exist in a  banking system."<<std::endl;
    }
    void get_user(){
        
    }

};


int main(){
    BankAccount user;               //creates a user object using bank account
    return 0;
}