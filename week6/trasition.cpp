//Raja Umer Saleem 2023-CS-609
// row to column transition
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void encrypt(string s, string key)
{
    int total = s.length();
    int column = key.length();
    int rows = ceil((double)total / column);
    cout << "Rows: " << rows << endl;
    char arr[rows][column];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {

            if (i * column + j >= s.length())
            {
                arr[i][j] = 'X';
            }
            else
            {
                arr[i][j] = s[i * column + j];
            }
        }
    }
    cout << "Key is " << key << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Encrypted: ";
    for (int i = 0; i < key.length(); i++)
    {
        for (int j = 0; j < rows; j++)
        {
            int keyword = (int)key[i] - 49;
            if (arr[j][keyword] != 'X')
            {
                cout << arr[j][keyword] << " ";
            }
            else
            {
                cout << " ";
            }
        }
    }
}
int main()
{
    string s = "SECURE MESSAGES.";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
        }
    }
    string key = "34125";
    encrypt(s, key);
}
