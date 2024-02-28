#include <iostream>

using namespace std;
int main() {
    // string my_string = "this is a  \t     sentance";

    // for(char c: my_string) {
    //     if(int(c) == 32 or int(c) == 9){
    //         continue;
    //     }
    //     cout << c << " is " << int(c) << "\t";
    // }]
    // i loops over rows
    // for(int i = 0; i < 10; i++){
    //     //j loops over columns
    //     for(int j = 9; j > 0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    string quit = "";
    bool wantsToQuit = false;

    while(not wantsToQuit){
        cout << "Want to quit?\n";
        cin >> quit;
        if(quit == "y" or quit == "Y"){
            wantsToQuit = true;
            cout << "Have a nice day!\n";
        }
        cin.ignore(1000, '\n');
        
    }
    return 0;
}