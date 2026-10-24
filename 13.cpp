#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char ch;

    if (!fin)
    {
        cout << "Unable to open input file.";
        return 1;
    }

    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "File copied successfully.";

    fin.close();
    fout.close();

    return 0;
}
