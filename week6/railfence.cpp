//Raja Umer Saleem 2023-CS-609
// Rail Fence Cipher
#include <iostream>
#include <string>
using namespace std;

void encryption(string s, int depth)
{
    int length = s.length();
    char arr[depth][length];
    bool check = true;
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < length; j++)
        {
            arr[i][j] = 0;
        }
    }
    int j = 0;
    for (int i = 0; i < length; i++)
    {
        arr[j][i] = s[i];
        if (j == 0)
        {
            check = true;
        }
        else if (j == depth - 1)
        {
            check = false;
        }
        if (check)
        {
            j++;
        }
        else
        {
            j--;
        }
    }
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < length; j++)
        {
            
                cout << arr[i][j]<<" ";
          
        }
        cout << endl;
    }

    string result = "";
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr[i][j] != 0)
            {
                result += arr[i][j];
            }
        }
    }
    cout << "Cipher Text by Rail Fence:" << result << endl;
}
void decryption(string s, int depth)
{
    cout << "Decryption Section" << endl;
    int num_col = s.length();
    int row = depth;
    char arr[row][num_col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < num_col; j++)
        {
            arr[i][j] = ' ';
        }
    }
    int j = 0;
    bool check = true;
    for (int i = 0; i < num_col; i++)
    {
        arr[j][i] = '1';
        if (j == 0)
        {
            check = true;
        }
        else if (j == depth - 1)
        {
            check = false;
        }
        if (check)
        {
            j++;
        }
        else
        {
            j--;
        }
    }
    int spell = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < num_col; j++)
        {
            if (arr[i][j] == '1')
            {
                arr[i][j] = s[spell];
                spell++;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < num_col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Decrypted Text:" << endl;
    j = 0;
    for (int i = 0; i < num_col; i++)
    {
        cout << arr[j][i];
        if (j == 0)
        {
            check = true;
        }
        else if (j == depth - 1)
        {
            check = false;
        }
        if (check)
        {
            j++;
        }
        else
        {
            j--;
        }
    }
    cout << endl;
}
int main()
{
    // Task#1
	// cout<<"Encrption"<<endl;
    // string s = "THISISASECRETMESSAGE";
    // int depth = 4;
    // encryption(s, depth);
    // string cipher_text = "TATGHSSEMAEIIERESSCS";
    // int depth1 = 4;
    // cout << endl;
    // decryption(cipher_text, depth1);

    //Task#2
    // menu base
    int choice;
    cout << "Enter 1 for Encryption and 2 for Decryption" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Encrption" << endl;
        string s ;
        cin.ignore();
        cout << "Enter Plain Text" << endl;
        getline(cin, s);
        int depth;
        cout << "Enter Depth" << endl;
        cin>>depth;
        encryption(s, depth);
    }
    else if (choice == 2)
    {
        string cipher_text;
        int depth1;
        cin.ignore();
        cout << "Enter Cipher Text" << endl;
        getline(cin, cipher_text);
        cout << "Enter Depth" << endl;
        cin >> depth1;
        cout << endl;
        decryption(cipher_text, depth1);
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
      
    return 0;
}
//////////////////////Output/////////////////////
// Encrption
// T           A           T           G
//   H       S   S       E   M       A   E
//     I   I       E   R       E   S
//       S           C           S
// Cipher Text by Rail Fence:TATGHSSEMAEIIERESSCS

// Decryption Section
// T           A           T           G
//   H       S   S       E   M       A   E
//     I   I       E   R       E   S
//       S           C           S
// Decrypted Text:
// THISISASECRETMESSAGE
