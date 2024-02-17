#include <iostream>
#include <fstream>
#include <cctype>

int main()
{
    // Open the input file
    std::ifstream inputFile("1.txt");

    // Check if the input file is opened successfully
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening 1.txt" << std::endl;
        return 1; // Return an error code
    }

    // Open the output file
    std::ofstream outputFile("2.txt");

    // Check if the output file is opened successfully
    if (!outputFile.is_open())
    {
        std::cerr << "Error opening 2.txt" << std::endl;
        return 1; // Return an error code
    }

    char ch;

    // Read characters from input file
    while (inputFile.get(ch) && ch != '~')
    {
        // Check if the character is alphanumeric
        if (ch >= 32 && ch <= 126)
        {
            // Write the character to the output file
            outputFile.put(ch);
        }
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    std::cout << "Alphanumeric characters written to output.txt" << std::endl;

    return 0; // Return 0 indicating successful execution
}
