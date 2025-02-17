// Raja Umer Saleem 2023-cs-609

// ROT13
 #include <iostream>
 #include <string>
 using namespace std;
 string ROT13smaller(string A)
 {
    string shift = "";
    for (int i = 0; i < A.size(); i++)
    {
        shift += char(((int)A[i] - 84) % 26 + 97);
    }
    return shift;
 }
 string ROT13capital(string A)
 {
    string shift = "";
    for (int i = 0; i < A.size(); i++)
    {
        shift += char(((int)A[i] - 13 + 65) % 26 + 65);
    }
    return shift;
 }
 int main()
 {
 	int choice;
    cout << "You wanna enter the Uppercase or Lowercase string" << endl;
    cout << "1. Lowercase" << endl;
    cout << "2. Uppercase" << endl;
    cin >> choice;
    string plain_textS;
    string plain_textL;
    string encrypted = "";
    string decrypted = "";
    switch (choice)
    {
    case 1:
        cout << "Enter the string" << endl;
        cin >> plain_textS;
        encrypted = ROT13smaller(plain_textS);
        cout << "Encrypted" << endl;
        cout << encrypted << endl;
        decrypted = ROT13smaller(encrypted);
        cout << "Orignal" << endl;
        cout << decrypted << endl;
        break;
    case 2:
        cout << "Enter the string" << endl;
        cin >> plain_textL;
        encrypted = ROT13capital(plain_textL);
        cout << "Encrypted" << endl;
        cout << encrypted << endl;
        decrypted = ROT13capital(encrypted);
        cout << "Orignal" << endl;
        cout << decrypted << endl;
        break;
    default:
        break;
    }
    return 0;
 }
