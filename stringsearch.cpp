// #include <iostream>
// using namespace std;

// int main(){
//     char s [10][11] = {"Aryan", "Aditya", "Ram", "Prom", };
//     string target = "Aditya";
//     for(int i = 0; i < 5; i++){
//         if(s[i]==target){
//             cout<<"Target find at: " << i++ << " ";
//             return 0;
//         }
//     }
// }

void main(){
    char S[10][11] = { "Ram", "Rom", "PROM", "EPROM", "EEPROM", "BIOS"};
    char T[1];
    cin >> T;
    int i;
    for(i = 0; i < 6; i++){
        if(!setup(S[i],T)){
            break;
        }
    }
    if(i==6){
        cout<<"NOT Present";
    }
    else{
        cout << "Present";
    }
}