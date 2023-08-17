#include <iostream>
#include <cmath>
using namespace std;

double calculator(double n1,double n2 , int ch);

int main(){

    cout << "Select from the given choice:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponential" << endl;
    cout << "6. sine (Enter in degrees and put number2=0)" << endl;
    cout << "7. cosine(Enter in degrees and put number2=0)" << endl;
    cout << "8. tangent(Enter in degrees and put number2=0)" << endl;
    cout << "9. To Quit" << endl;
    int op = 1;
    double number1=0;
    double number2=0;
    cout << "Enter your choice:";
    cin >> op ;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;



    while ( op != 9){

        cout << calculator(number1 , number2 , op) << endl;

        cout << "Enter your choice:";
        cin >> op ;


        cout << "Enter first number:";
        cin >> number1;

        cout << "Enter second number:";
        cin >> number2;


    }

    system("PAUSE");
    return 0;
}


double calculator(double n1,double n2 , int ch){
    double result=0.0;
    if(ch == 1)
    {
        result = n1+n2 ;
    }else if(ch == 2){
        result = n1-n2 ;
    }else if(ch == 3){
        result = n1*n2 ;
    }else if(ch == 4){
        result = n1/n2 ;
    }else if(ch == 5){
        result = pow(n1,n2);
    }else if(ch == 6){
        double n2=((n1*3.1415)/180);
        result = sin(n2) ;
    }else if(ch == 7){
        double n2=((n1*3.1415)/180);
        result = cos(n2) ;
    }else if(ch == 8){
        double n2=((n1*3.1415)/180);
        result = tan(n2);
    }else{
        cout << "Please enter from given choice" << endl;
    }
    return result;
}


