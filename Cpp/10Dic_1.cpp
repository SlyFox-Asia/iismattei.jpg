#include <iostream>
using namespace std;

int main() {
    int num1,num2,bigger,smaller;
    num1=0;
    num2=0;
    bigger=0;
    smaller=0;
    
    cout<<"Inserisci il primo numero"<<endl;
    cin>>num1;
    cout<<"Il numero che hai inserito è "<<num1<<endl;
    
    cout<<"Inserisci il secondo numero"<<endl;
    cin>>num2;
    cout<<"Il numero che hai inserito è "<<num2<<endl;
    
    if (num1>=num2) {
        bigger=num1;
        smaller=num2;
    } else {
        bigger=num2;
        smaller=num1;
    }
    
    cout<<"Il numero più piccolo è "<<smaller<<", mentre il numero più grande è "<<bigger<<"."<<endl;
    
    return 0;
}