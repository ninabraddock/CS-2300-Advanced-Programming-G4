#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file to write to 
    ofstream file;
    file.open("numbers.html");
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // 50 integers to test
    for (int i = 1; i <= 50; i++) {
        // if even
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        // if odd
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    file.close();
    // read numbers to user
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
