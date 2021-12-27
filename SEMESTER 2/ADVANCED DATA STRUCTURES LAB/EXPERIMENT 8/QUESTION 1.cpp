#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    char filename[50], contents[9999];
    cout << "\nEnter the filename to be used: ";

    cin.getline(filename, 50);

    ofstream myfile;
    myfile.open(filename, std::ios_base::app);

    cout << "\n Enter the content to be entered: ";

    cin.getline(contents, 9999);
    myfile << contents;
    myfile.close();
    ifstream fin(filename); //opening text file
    int count = 0;
    char ch[20], c[20];
    cout << "Enter a word to count:";
    gets(c);
    while (fin)
    {
        fin >> ch;
        if (strcmp(ch, c) == 0)
            count++;
    }
    cout << "Occurrence=" << count << endl;
    fin.close(); //closing file
    return 0;
}
