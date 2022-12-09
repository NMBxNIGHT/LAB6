#include<iostream>
using namespace std;

int main(){
    int odd=0,even=0,num=1;
    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num%2==0 && num!=0)
        {   
            even++;
        }else if(num!=0){
            odd++;
        }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
