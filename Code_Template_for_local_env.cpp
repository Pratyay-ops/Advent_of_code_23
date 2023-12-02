#include <bits/stdc++.h>
using namespace std;
int code(std::istream &cin, std::ostream &cout) {
    //enter code here
    return 0;
}
int main() {
    const char* inputFilePath = "path/input.txt";
    const char* outputFilePath = "path/output.txt";
#ifndef ONLINE_JUDGE
    freopen("error.txt","w",stderr);
#endif

    std::ifstream inputFile(inputFilePath);

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input file: " << inputFilePath << std::endl;
        return 1;
    }

    std::ofstream outputFile(outputFilePath);

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open output file: " << outputFilePath << std::endl;
        return 1;
    }

    // Call the code function with the input and output streams
    int result = code(inputFile, outputFile);

    inputFile.close();
    outputFile.close();

    return result;
}
