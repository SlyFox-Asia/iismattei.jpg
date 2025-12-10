#include <iostream>
using namespace std;

int main() {
    int num1,num2,temp;
    num1=0;
    num2=0;
    temp=0;
    
    cout<<"Inserisci il primo numero"<<endl;
    cin>>num1;
    
    cout<<"Inserisci il secondo numero"<<endl;
    cin>>num2;
    
    if (num1>num2) {
        temp=num1;
        temp=num2;
        num2=temp;
    }
    cout<<num2<<endl;
    cout<<num1<<endl;
    
    return 0;
}