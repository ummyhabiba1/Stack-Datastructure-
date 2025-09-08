// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string moves = "URDL";  // Example input
//     int x = 0, y = 0;       // Starting coordinates

//     // Loop through each move
//     for (int i = 0; i < moves.length(); i++) {
//         char move = moves[i];
//         if (move == 'U') {
//             y++;            // Move up
//         } 
//         else if (move == 'D') {
//             y--;            // Move down
//         } 
//         else if (move == 'L') {
//             x--;            // Move left
//         } 
//         else if (move == 'R') {
//             x++;            // Move right
//         }
//     }

//     // Check if robot is back at origin
//     if (x == 0 && y == 0) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }







#include<iostream>
using namespace std;
int main(){
    string moves = "UDRLRLL";
    int x = 0 ,y=0;
    for(int i = 0 ; i <moves.length() ; i++){
       char move =moves[i];
       if(move=='U'){
        y++;
       }
       else if ( move=='D'){
        y--;
       }
       else if ( move=='L'){
        x--;
       }
       else if ( move=='R'){
        x++;
       }

    }
    if (x==0&&y==0){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}









