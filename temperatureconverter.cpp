#include <iostream>

using namespace std;

//Temperature cauculator

//C
string answer;

int main(){
    string answer;
    do{

        double num;
        string temp;
        cout << "============================================================"<<endl;
        cout << "Welcome To The Celsius to Kelvin Or Fahrenheit Converter C++"<<endl;
        cout << "============================================================"<<endl;
    
        cout << "Enter Value=";
        cin >> num;
        if (!cin){
            cout << "Didnt Enter a valid value, program ending." << endl;
            return 0;
        }
        cout << "============================================================"<<endl;
        cout << "Which Temperature Type You Using?(f/c/k)";
        cin>>temp;
        
        if (temp == "c" || temp == "C"){
            cout << "================Results====================="<<endl;
            cout << "Celsius    = " << num << endl;
            cout << "Fahrenheit = " << (num * 1.8) + 32 << endl;
            cout << "Kelvin     = " << num + 273.15 << endl;
            cout << "============================================================"<<endl;
        }
        
        else if (temp == "f" || temp == "F"){
            cout << "================Results====================="<<endl;
            cout << "Celsius    = " << (num - 32) / 1.8 << endl;
            cout << "Fahrenheit = " << num << endl;
            cout << "Kelvin     = " << ((num - 32) / 1.8) + 273.15 << endl;
            cout << "============================================================"<<endl;
        }
        
        else if (temp == "k" || temp == "K"){
            cout << "================Results====================="<<endl;
            cout << "Celsius    = " << num - 273.15 << endl;
            cout << "Fahrenheit = " << ((num - 273.15) * 1.8) + 32 << endl;
            cout << "Kelvin     = " << num << endl;
            cout << "============================================================"<<endl;
        }
        
        else {
            cout << "Invalid temperature typer try restarting!" << endl;
        }
        
        cout << "Want to Make Another?(Yes/No)===";
        cin >> answer;
        cout << endl;
        
    }while (answer == "Yes"|| answer == "yes");
    return 0;
    
}