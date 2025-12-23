#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

int main() {
    // Enable UTF-8 output in Windows console
    SetConsoleOutputCP(CP_UTF8);

    // Enable virtual terminal sequences (needed for true colors)
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    SetConsoleMode(hOut, dwMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    std::vector<std::string> lines = {
"              __                               _ ",
"            / _|                             | |",
"  ___  __ _| |_ ___  __ _ _   _  __ _ _ __ __| |",
" / __|/ _` |  _/ _ \\/ _` | | | |/ _` | '__/ _` |",
" \\__ \\ (_| | ||  __/ (_| | |_| | (_| | | | (_| |",
" |___/\\__,_|_| \\___|\\__, |\\__,_|\\__,_|_|  \\__,_|",
"                     __/ |                      ",
"                    |___/                       "
    };

    // Define gradient start/end colors in RGB
    int startR = 0, startG = 0, startB = 139;    // Dark Blue
    int endR = 173, endG = 216, endB = 230;      // Light Blue

    int totalLines = lines.size();

    for (int i = 0; i < totalLines; ++i) {
        // Interpolate RGB values
        int r = startR + (endR - startR) * i / (totalLines - 1);
        int g = startG + (endG - startG) * i / (totalLines - 1);
        int b = startB + (endB - startB) * i / (totalLines - 1);

        // Print with 24-bit color escape sequence
        std::cout << "\x1b[38;2;" << r << ";" << g << ";" << b << "m" 
                  << lines[i] << "\x1b[0m" << std::endl;
    }

    return 0;
}
