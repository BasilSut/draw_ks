#include <iostream>

using std::cout;
using std::cin;

int main(){
    char answer;
    cout<<"are you sure you want this skill?(y/n) \n";
    cin >> answer;
    if(answer=='y'){
        cout<<"!!!\n";
    }
    else if(answer=='n'){
        cout<<"chose another skill\n";
    }
    else{
        cout<<"error, invalid data\n";
    }
    cout<<"hello github!\n";
    return 0;
}