// vigenere_cipher
//Raja Umer Saleem 2023-CS-609
#include <iostream>
#include <string>
using namespace std;

int return_index(char c)
{
    return (int)c - 65;
}
int main()
{
    char one;
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < alphabets.length(); i++)
        {
            one = (char)((((int)alphabets[i] + j - 65) % 26) + 65);
            cout << one << " ";
        }
        cout << endl;
    }
    cout << "encryption" << endl;
    string plain;
    string key;
    string encrypted;
    //        getline(cin, plain);
    //        getline(cin, key);
    plain = "ATTACK AT DAWN";
    key = "LEMON";

    int key_length = key.length();
    for (int i = 0; i < plain.length(); i++)
    {
        int index_plain = return_index(plain[i]);
        int index_key = return_index(key[i % key_length]);
        int encrpyt_index = ((index_plain + index_key) % 26);
        cout << alphabets[encrpyt_index];
    }
    cout << endl;

    cout << "decryption" << endl;
    key = "LEMON";
    encrypted = "LXFOPV MH OEIB";
    key_length = key.length();
    for (int i = 0; i < encrypted.length(); i++)
    {
        int index_cipher = return_index(encrypted[i]);
        int index_key = return_index(key[i % key_length]);
//        cout << index_cipher - index_key << endl;
        int decrypt_index = ((index_cipher - index_key + 26) % 26);
        cout << alphabets[decrypt_index];
    }
    return 0;
}
