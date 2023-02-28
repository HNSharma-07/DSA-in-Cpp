// making a simplest calculater to understand syntax of switch cases :
#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"enter a and b respectively : "<<endl;
  cin>>a>>b;
  char op;
  cout<<"enter the operation (+,-,*,/,%) to perform :"<<endl;
  cin>>op;
  switch (op /*this can be an equation as well*/){
    case '+' : cout<<"a+b : "<<a+b<<endl;
               break;
    case '-' : cout<<"a-b : "<<a-b<<endl;
               break; 
    case '*' : cout<<"a*b : "<<a*b<<endl;
               break; 
    case '/' : cout<<"a/b : "<<a/b<<endl;
               break;
    case '%' : cout<<"a%b : "<<a%b<<endl;
               break;
    default : cout<<"enter valid operation !!!";// default case is optional
  }
}

// in case value : it can be either int or char only.

/* this can also be happened :  
  switch (num*something)  // like this and according to that the case value should be  */

// we can use other switch case in the case of switch case, which is called nested switch

// basically switch statement is a alternative of if...elseif...else... statement that's why we can use break and continue in switch as well

// break is use for get out of the switch block, if we don't put break then it will check for further cases as well
// continue in switch case is not recommended : why is still finding :(

/* using switch case in infinite loop , here we are using exit(0);
--> there are primarily two types of exit();
1. exit(0) which is the exit successfully which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
2. exit(1) Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors. */