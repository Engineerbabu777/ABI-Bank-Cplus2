#include<iostream>    // header Files for Input/Output!
using namespace std;   // including standard namespace fro using the standard folder in our main library!
int main(){           //  starting Things from the main function!
int x[5],y[5],z[5];    // declaring the arrays of type integers! 
char op;              // using option varible for further use! 
int *ptr[3];           // declaring pointer array of type integers!
int **p;              // declaring double pointer of type integers!
ptr[0] = x , ptr[1] = y , ptr[2] = z;  // initlizing pointer array to integer arrays variables!
p = ptr;  // assigining address of pointer varaible to pointer to pointer varaible!
for(int i=0;i<5;i++){  // using for loop for storing values in our created arrays! 
cout<<"Enter the value at index x["<<i<<"] : ";cin>>x[i]; // storing values in x array!  
cout<<"Enter the value at index y["<<i<<"] : ";cin>>y[i];// storing values in y array!
cout<<"Enter the value at index z["<<i<<"] : ";cin>>z[i]; // storing values in z array!
} // ending bracket of for loop!
cout<<"Enter the option whose values want to retrive: "<<endl;cin>>op;      //option !
switch(op){    // using switch cases for showing values on the output screen(through varaible op)!
case 'x': // case x!
	for(int j=0;j<3;j++)cout<<"The value at index x["<<j<<"]: "<<*(*(p+0)+j)<<endl;break;
case 'y': // case y!  // 0,1,2 represents the pointer to array! // j represents the array! // p represents d-ptr!
    for(int j=0;j<3;j++)cout<<"The value at index y["<<j<<"]: "<<*(*(p+1)+j)<<endl;break;
case 'z': // case z!
	for(int j=0;j<3;j++)cout<<"The value at index z["<<j<<"]: "<<*(*(p+2)+j)<<endl;break;
}
return 0; // returing value 0 to main function for successfull termination of program!
}
