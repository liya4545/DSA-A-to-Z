#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    if(marks <= 44 && marks >= 25){
        cout << "E";
    }
    if(marks <= 49 && marks >=45){
        cout << "D";
    }
    if(marks <=59 && marks >= 50){
    cout << "C";}
    if(marks <=79 && marks>= 60 ){
        cout << "B";
    }
    if(marks <=100 && marks >= 80){
        cout << "A";
    }
    return 0;
}