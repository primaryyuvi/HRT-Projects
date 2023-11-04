#include<bits/stdc++.h>
using namespace std;
double add (double number1,double number2){
    return number1 + number2;
}
double subtract (double number1,double number2){
    return number1 - number2;
}
double multiply (double number1,double number2){
    return number1 * number2;
}
double divide (double number1,double number2){
    return number1 / number2;
}
int main(){
    double number1,number2,answer;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    char operatorr;
    cout<<"Enter the Operator:\n1.'+' for Addition\n2.'-' for Subtraction\n3.'*' for Multiplication\n4.'/' for Division "<<endl;
    cin>>operatorr;
    if(operatorr == '+'){
        answer = add(number1,number2);
    }
    else if(operatorr == '-'){
        answer = subtract(number1, number2);
    }
    else if(operatorr == '*'){
        answer = multiply(number1, number2);
    }
    else if(operatorr == '/'){
        if(number2 != 0)
        answer = divide(number1, number2);
        else
        cout<<"The second number should not be zero. Enter the correct number "<<endl;
    }
    else{
        cout<<"Enter the appropriate operator"<<endl;
        exit(0);
    }
    cout<<"The answer to "<<number1<<" "<<operatorr<<" "<<number2<<" is :\n"<<answer;
}
