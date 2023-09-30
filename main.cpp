#include <iostream>
#include <fstream>

#include "month_days.h"
#include <string>


using namespace std;

const string ACCOUNT_PATH = "users/";

const double WASHINGTON_TAX_RATE = 0.065;

int main(int argc, char* argv[]) {
    string username;

    if (argc == 1) {
        cout << "Please enter a new username: ";
        cin >> username; 
    } else username = argv[1];

    ofstream stream;
    stream.open(ACCOUNT_PATH + username + ".txt");

    stream.close();
}



