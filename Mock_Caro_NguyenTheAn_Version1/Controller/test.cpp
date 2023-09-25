#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // Open the input file
    ifstream infile("file.txt");
    if (!infile) {
        cout << "Cannot open input file.\n";
        return 1;
    }

    // Create a temporary output file
    ofstream outfile("temp.txt");
    if (!outfile) {
        cout << "Cannot create output file.\n";
        return 1;
    }

    // Read the input file line by line
    string line;
    while (getline(infile, line)) {
        // Check if the line contains the string to be replaced
        string old_str = "Alice 25"; // The string to be replaced
        size_t pos = line.find(old_str);
        if (pos != string::npos) {
            // Replace the old string with the new one
            string new_str = "Hi"; // The replacement string
            line.replace(pos, old_str.length(), new_str);
        }
        // Write the modified line to the output file
        outfile << line << "\n";
    }

    // Close both files
    infile.close();
    outfile.close();

    // Rename the temporary file to the original file name
    remove("file.txt");
    rename("temp.txt", "file.txt");

    return 0;
}
