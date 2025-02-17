#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char matrix[5][5];
void createPlayfairMatrix(const char *key)
{
    char alphabet[] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
    bool used[26] = {false};
    int keyLength = strlen(key);
    int index = 0;
    for (int i = 0; i < keyLength; ++i)
    {
        char c = toupper(key[i]);
        if (c == 'J')
            c = 'I'; // Replace J with I
        if (isalpha(c) && !used[c - 'A'])
        {
            used[c - 'A'] = true;
            matrix[index / 5][index % 5] = c;
            index++;
        }
    }
    for (int i = 0; i < 25; ++i)
    {
        if (!used[alphabet[i] - 'A'])
        {
            matrix[index / 5][index % 5] = alphabet[i];
            index++;
        }
    }
}
void findCharacterPosition(char c, int &row, int &col)
{
    for (row = 0; row < 5; ++row)
    {
        for (col = 0; col < 5; ++col)
        {
            if (matrix[row][col] == c)
            {
                return;
            }
        }
    }
}
void encrypt(const char *plaintext, char *cipherText)
{
    int length = strlen(plaintext);
    int index = 0;
    for (int i = 0; i < length; i++)
    {
        char c = toupper(plaintext[i]);
        if (c == 'J')
            c = 'I';
        if (isalpha(c))
        {
            cipherText[index++] = c; 
        }
    }
    for (int i = 0; i < index; i += 2)
    {
        if (i + 1 == index || cipherText[i] == cipherText[i + 1])
        {
            for (int j = index; j > i + 1; --j)
            {
                cipherText[j] = cipherText[j - 1];
            }
            cipherText[i + 1] = 'X';
            index++;
        }
    }
    for (int i = 0; i < index; i += 2)
    {
        char first = cipherText[i];
        char second = cipherText[i + 1];
        int row1, col1, row2, col2;

        findCharacterPosition(first, row1, col1);
        findCharacterPosition(second, row2, col2);

        if (row1 == row2)
        {
            cipherText[i] = matrix[row1][(col1 + 1) % 5];
            cipherText[i + 1] = matrix[row2][(col2 + 1) % 5];
        }
        else if (col1 == col2)
        {
            cipherText[i] = matrix[(row1 + 1) % 5][col1];
            cipherText[i + 1] = matrix[(row2 + 1) % 5][col2];
        }
        else
        {
            cipherText[i] = matrix[row1][col2];
            cipherText[i + 1] = matrix[row2][col1];
        }
    }
    cipherText[index] = '\0';
}
void decrypt(const char *cipherText, char *plainText)
{
    int length = strlen(cipherText);
    int index = 0;

    for (int i = 0; i < length; i += 2)
    {
        char first = cipherText[i];
        char second = cipherText[i + 1];
        int row1, col1, row2, col2;

        findCharacterPosition(first, row1, col1);
        findCharacterPosition(second, row2, col2);

        if (row1 == row2)
        {
            plainText[index++] = matrix[row1][(col1 + 4) % 5];
            plainText[index++] = matrix[row2][(col2 + 4) % 5];
        }
        else if (col1 == col2)
        {
            plainText[index++] = matrix[(row1 + 4) % 5][col1];
            plainText[index++] = matrix[(row2 + 4) % 5][col2];
        }
        else
        {
            plainText[index++] = matrix[row1][col2];
            plainText[index++] = matrix[row2][col1];
        }
    }
    plainText[index] = '\0';
    int finalIndex = 0;
    for (int i = 0; i < index; ++i)
    {
    	if(plainText[i] == 'X' && plainText[i - 1] == plainText[i + 1])
    	{
		}
		else if(i == index - 1 && plainText[i] == 'X')
		{
		}
       else if (!(plainText[i] == 'X' && plainText[i - 1] == plainText[i + 1]))
        {
            plainText[finalIndex++] = plainText[i];
        }
    }
    plainText[finalIndex] = '\0';
}
int main()
{
    char key[100];
    char plaintext[100];
    char cipherText[200];
    char decryptedText[200];
    while (true)
    {
        cout << "Enter the key: ";
        cin.getline(key, 100);
        cout << "Enter plaintext: ";
        cin.getline(plaintext, 100);
        createPlayfairMatrix(key);
        encrypt(plaintext, cipherText);
        cout << "Encrypted text: " << cipherText << endl;
        decrypt(cipherText, decryptedText);
        cout << "Decrypted text: " << decryptedText << endl;
    }
    return 0;
}
