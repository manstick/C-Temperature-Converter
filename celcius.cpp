#include <iostream>

using namespace std;

//C

double c;




int main(){
    cout << "Welcome To The Celsius to Kelvin Or Fahrenheit Converter C++"<<endl;
    
    
    cout << "Enter Celsius=";
    cin >> c;
    
    cout<<endl;
    
    cout << "Fahrenheit="<< (c*1.8)+32<<endl;
    cout << "Kelvin=" << c+273<< endl;
    
    return 0;
    
}