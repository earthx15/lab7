/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include<iostream>
#include<string>
using namespace std;
string cheak(int age){
    if(age<=20){
        int height;
        cout <<"Enter your height: ";
        cin >> height;
        if(height<160){
            return "UNFRIEND";
        }else if(height<175){
            return "FRIEND";
        }else{
            int money;
            cout <<"Enter your property: ";
            cin >> money;
            if (money>69000000)
            {
                return "MARRIED";
            }else{
                return "ONE-NIGHT-STAND";
            }
             
        }
    }else{
        if (age<30)
        {
            int money;
            cout <<"Enter your property: ";
            cin >> money;
            if (money>10000000)
            {
                return "BEST FRIEND"; 
            }else{
                return "UNFRIEND";
            }
            
        }else{
            return "UNFRIEND";
        }
        
    }
    return "UNFRIEND";
}
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    string a=cheak(age);
    cout <<"Your status = "<< a;
    return 0;
}
