#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define GCD(a,b) __gcd(a,b);
using namespace std;

class bankaccount
{
private:
    string name_of_the_customer;
   int account_number;
   string type_of_account;
   int balance_amount=0;
public:
void customerDetails()
{
   string s;
   int acc;
   cout<<"NAME :";
   cin>>s;
   cout<<"ACCOUNT NO :";
   cin>>acc;
   name_of_the_customer=s;
   account_number=acc;
}
void accountType()
{
    string x;
    cout<<"ENTER THE TYPE OF ACCOUNT:";
    cin>>x;
    type_of_account=x;
}
void balance()
{   cout<<"CURRENT BALANCE IS"<<' ';
    cout<<balance_amount<<endl;
}
void deposit()
{
   int recent_dept;
   cout<<"ENTER DEPOSIT AMOUNT :";
   cin>>recent_dept;
   balance_amount+=recent_dept;
   cout<<"NEW BALANCE IS"<<' ';
   cout<<balance_amount<<endl;
}
void withdraw()
{
    int withdrawing;
    cout<<"ENTER THE WITHDRAW AMOUNT :";
    cin>>withdrawing;
    if( balance_amount>=withdrawing) {
    balance_amount-=withdrawing;
    }
    else
    {
        cout<<"NOT Sufficient balance"<<endl;
    }

}
void display()
{ cout<<"NAME OF THE CUSTOMER :";
  cout<<name_of_the_customer<<endl;
  cout<<"ACCOUNT NO :";
   cout<<account_number<<endl;
   cout<<"TYPE OF ACCOUNT :";
   cout<<type_of_account<<endl;
   cout<< "BALANCE IS :";
   cout<<balance_amount<<endl;
}



};
int main()
{
 bankaccount p;
 p.customerDetails();
 p.accountType();
 p.balance();
 p.deposit();
 p.withdraw();
 p. display();

}
