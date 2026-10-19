#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create ofstream object
    ofstream fout;
    string line;

    // Open file for writing
    fout.open("sample.txt");

    // Read input and write to file
    while (fout)
    {
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Create ifstream object
    ifstream fin;

    // Open file for reading
    fin.open("sample.txt");

    // Read and display file contents
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}
