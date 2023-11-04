#include<iostream>
using namespace std;
         int main()
                     { 
                     double number1,number2;
                     char OPERATOR;
                     cout<<"**************************************************************************************************************************************"<<endl;
                     cout<<"\t\t\t\t\t\tWELCOME TO YOUR OWN CALCULATOR"<<endl;
                     cout<<"\t\t\t\tTHIS CALCULATOR CAN PERFOTM ALL ARITHEMATIC OPERATION AS YOU WANT"<<endl;
                     cout<<"\tPERFORM YOUR OPERATION IN THIS REQUIRED FORMATE FIRSTELY ENTER 1ST NUMBER'ENTER ARITHEMATIC OPERATOR'AND THEN ENTER 2nd NUMBER"<<endl;
                     cout<<"**************************************************************************************************************************************"<<endl;

cout<<"Enter The First Number :"<<endl;                 //for taking value of number1
cin>>number1;

cout<<"Enter singn Of an arithematic operator as you want to perform operation :"<<endl;
cin>>OPERATOR;                                                //for taking operator -,+,/,*
                                  
cout<<"Enter Another Number :"<<endl;                                   //for taking value of number2
cin>>number2;

 switch(OPERATOR)
                {
                    case '+':                                     cout<<"The required Sum is ="<<number1+number2<<endl;
                    break;

                    case '-':
                    cout<<"The required Subtraction is ="<<number1-number2<<endl;
                    break;

                    case '*':
                    cout<<"The required Multiplication is ="<<number1*number2<<endl;
                    break;

                     case '/':
                    if(number2!=0)
                           {
                    cout<<"The required Division is ="<<number1/number2<<endl;
                                                                  }
                    else
                          {
                           cout<<"INVALID INPUT"<<endl;
                          cout<<"THE SECOND GIVEN NUMBER IS ZERO OR 0"<<endl;
                                                       }
                           break;
                           default:
                          cout<<"INVALID OPERATOR"<<endl;
                          cout<<"PLEASE SELECT AN ARITHEMATIC OPERATOR LIKE -,+,*,/";

                        cout<<"THANK'S YOU... "<<endl;  }
                        return 0;
                    }