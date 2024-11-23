#include<iostream>
#include<string>
using namespace std;
int value(char a){
    switch(a){
        case 'I':
        return 1;
        break;

        case 'V':
        return 5;
        break;

        case 'X':
        return 10;
        break;

        case 'L':
        return 50;
        break;

        case 'C':
        return 100;
        break;

        case 'D':
        return 500;
        break;

        case 'M':
        return 1000;
        break;

        default:
        return 0;
        break;

    }
}
int main(){
    string str;
    cout<<"Enter your Roman value in Capital Word: ";
    cin>>str;

    //XLVII


    int total = 0;
    int next = value(str[1]);
    int size = str.size() - 1;
    for(int i=0;i<=size;i++){
        int curr = value(str[i]);
        if(next>curr){
            total-=curr;
        }
        else{
            total+=curr;
        }
        next = value(str[i+2]);
    }
    total = total + value(str[size]);
    cout<<"The value is "<<total;
    return 0;
}