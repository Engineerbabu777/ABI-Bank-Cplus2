#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
	char name[50];
	char AccountName[100];
	double age;
	string num1;
	int key;
	long double a;
	cout<<"*Fill This Form To Create and use your bank Account: "<<endl;
	cout<<"Enter Your Bank Name(eg.Meezan/United/International): ";
	gets(name);
	cout<<"Enter Account Holder Your Name: "<<endl;
	gets(AccountName);
	cout<<"Enter Age: "<<endl;
	cin>>age;
	cout<<"Enter Your Account Number(must be than 11/16 values): "<<endl;
	cin>>num1;
	cout<<"Create your Pin/Set your Pin: "<<endl;
    cin>>key;
    system("cls");
    cout<<"Your Account has been Succesfully Created."<<endl;
    cout<<"Enter any number to proceed."<<endl;
    cin>>a;
    cout<<"******Welcome to your "<<name<<" Bank/Account ******"<<endl;

		cout<<"Hi, "<<AccountName<<" Welcome to your Account."<<endl;
long double balance=100;
int withDraw=0;
int option;
do{
cout<<"Our Menu is here: "<<endl;
cout<<"1.Check Current Balance"<<endl;
cout<<"2.WithDraw Amount"<<endl;
cout<<"3.Perform Transection"<<endl;
cout<<"4.Deposit Amount"<<endl;
cout<<"5.Customer Information"<<endl;
cout<<"6.Exit"<<endl;
loop:
cout<<"What would you like to do?"<<endl<< "Select ";
cin>>option;
system("cls");

switch(option){
	case 1:
	{ int key1;
	loop1:
		cout<<"Enter the Pin: "<<endl; 
		cin>>key1;
		if(key == key1){
		cout<<setw(20)<<"Mr. "<<AccountName<<endl;
		cout<<"Your Current Balance is "<<balance<<"$"<<endl;
	} 
	 else{
	 	cout<<"Your pin is Wrong."<<endl;
	 	cout<<"Try Again."<<endl; goto loop1;
	 }
		break;
    }
    
	case 2:
		{  int key2;
		cout<<"Enter the pin: ";
		cin>>key2;
		 if(key == key2){
			cout<<"Enter the amount, you want to withDraw: "<<endl;
			cin>>withDraw;
			if(withDraw>balance){
				cout<<"Not Enough Balance"<<endl<<"Welcome Again"<<endl; goto loop;
			}
			else
			   balance = balance-withDraw;
			   cout<<"You have successfully withDraw "<<withDraw<<"$"<<endl;
			   cout<<"Your current Balance is "<<balance<<"$"<<endl; 
		}
			   break; 
		}
	case 3:
		{ long double method,key3,amount;
		    double mblNum;
		    string name = "ABI";
			system("cls");
			cout<<"So, you want to do any transection."<<endl;
			cout<<"Select Method: "<<endl;
			cout<<"1.JazzCash."<<"\t\t\t"<<"2.EasyPaisa."<<endl;
			cout<<"3.Upaisa."<<"\t\t\t"<<"4.MasterCard."<<endl;
			cin>>method;
			cout<<"Enter the Account Number: "<<endl;
			cin>>mblNum;
			cout<<"Enter Your Pin: "<<endl;
			cin>>key3;
			if(key == key3){
				if(amount>balance){
				  cout<<"Sorry Not Enough amount";	
				}
				else {
				cout<<"Amount: ";
				cin>>amount;
				cout<<"You have successfully transferred "<<amount<<"$"<<" to "<<mblNum<<".";
				balance = balance - amount;
			}
				
			}
			break;
		}
		case 4:
			{   long double deposit=0;
			cout<<"How much amount you want to deposit? "<<endl;
			cout<<"Amount: ";
			cin>>deposit;
			cout<<endl;
			cout<<"You have successfully deposited "<<deposit<<"$ to your "<<name<<" Account."<<endl;
			balance = balance+deposit;
			cout<<"Your New "<<name<<" Accoount Balance is "<<balance<<"$";
		    break;
			}
		case 5:
		{
			int key5;
			cout<<"Enter your pin: "<<endl;
			cin>>key5;
			if(key5 == key){
				cout<<"Bank Name: "<<name<<endl;
				cout<<"Account Holder Name: "<<AccountName<<endl;
				cout<<"Your pin: "<<key<<endl;
				cout<<"Your Account Number: "<<num1<<endl;
			}
			else
			  cout<<"Can't Share our customer information with stanger."<<endl;
		 } 

}
cout<<endl;
cout<<endl;
cout<<endl;

}while(option != 6);

return 0;
}

