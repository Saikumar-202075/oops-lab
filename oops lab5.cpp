/*write a class Account that represent your account and then use it,the class should allow deposit money
withdraw money,caliculate intrest */

#include <iostream>

using namespace std;
class Account{
    private:
    double balance;
    int account_num;
    public:
    Account (int num){
        account_num=num;
    }
    int accountnumber(){
        return account_num;
    }
    int balanc()
    {
        return balance;
    }
    void depositmoney(double);
    void withdrawmoney(double);
    double simpleintrest(double,double);
};
void Account::depositmoney(double money)
{
    balance +=money;
}
void Account::withdrawmoney(double money)
{
    if(balance>=money){
        balance-=money;
    }else{
        cout<<"you have insufficent balance";
    }
}
double Account::simpleintrest(double rate,double time){
    int intrst;
  
    {
        intrst=(balance*rate*time)/100;
        
    }
    return intrst;
}


int main()
{
     Account x(3567);
     x.depositmoney(400);
     x.withdrawmoney(100);
     cout<<x.simpleintrest(15,10)<<endl;
    return 0;
}


