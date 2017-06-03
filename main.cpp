#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello HUY!" << endl;
    int a,b,result;
    string arithmetic;
    cout <<"Please enter the first number: ";
    cin >>a;
    cout <<"Please enter the second number: ";
    cin >>b;
    cout <<"Please enter one of the four arithmetic operations (+,-,*,/): ";
    cin >>arithmetic;
    if(arithmetic=="+")
        result=a+b;
    else if(arithmetic=="-")
        result=a-b;
    else if(arithmetic=="*")
        result=a*b;
    else if(arithmetic=="/")
        result=a/b;
    else
            cout <<"Error arithmetic!";
    cout <<"The result is "<<result;
    return 0;
}
