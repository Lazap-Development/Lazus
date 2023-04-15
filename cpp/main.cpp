#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    // Check if the user has provided a game to run
    if (argc < 2) {
        cout << "Usage: proton [game.exe]" << endl;
        return 1;
    }

    // Build the command to run the game with Proton
    string command = "proton run " + string(argv[1]);

    // Run the command using the system function
    int result = system(command.c_str());

    // Check the result of the system call
    if (result == 0) {
        cout << "Game ran successfully!" << endl;
    } else {
        cout << "Error running game." << endl;
    }

    return 0;
}