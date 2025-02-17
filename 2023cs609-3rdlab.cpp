
//Raja Umer Saleem 2023-cs-609

// #include <iostream>
// using namespace std;
// void exponents(int base, int exponent, int mod)
// {
//    long long result = 1;
//    for (int i = 1; i <= exponent; i++)
//    {
//        result = (result * base) % mod;
//    }
//    cout << "Result: " << result << endl;
// }
// int main()
// {
//    int base = 0;
//    cin >> base;
//    int exponent = 0;
//    cin >> exponent;
//    int mod = 0;
//    cin >> mod;
//    exponents(base, exponent, mod);
//    return 0;
// }

//  #include <iostream>
// using namespace std;
// void subraction(int a, int b, int m)
// {
//     int c = ((a % m) - (b % m)) % m;
//     if (c < 0) {
//         c += m;
//     }
//     cout << "Result: " << c << endl;
// }
// int main()
// {
//     int a = 0;
//     cin >> a;
//     int b = 0;
//     cin >> b;
//     int m = 0;
//     cin >> m;
//     subraction(a, b, m);
//     return 0;
// }

// // (A * A^-1) ≡ 1 (mod C)
// #include <iostream>
// using namespace std;
// void findInverse(int num, int mode)
// {
//     bool check = false;
//     for (int i = 0; i < mode; i++)
//     {
//         if ((num * i) % mode == 1)
//         {
//             cout << "inverse " << i << endl;
//             check = true;
//         }
//     }
//     if (check == false)
//     {
//         cout << "Inverse not Found" << endl;
//     }
// }
// int main()
// {
//     int num = 0;
//     cout << "Enter number to find its inverse" << endl;
//     cin >> num;
//     int mode = 0;
//     cout << "Enter mod number" << endl;
//     cin >> mode;
//     findInverse(num, mode);
//     return 0;
// }

// // calculator
// #include <iostream>
// using namespace std;
// void exponents(int base, int exponent, int mod)
// {
//     long long result = 1;
//     for (int i = 1; i <= exponent; i++)
//     {
//         result = (result * base) % mod;
//     }
//     cout << "Result: " << result << endl;
// }
// void subtraction(int a, int b, int m)
// {
//     int c = ((a % m) - (b % m)) % m;
//     if (c < 0)
//     {
//         c += m;
//     }
//     cout << "Result: " << c << endl;
// }
// int modadd(int a, int b, int m)
// {
//     int c = ((a % m) + (b % m)) % m;
//     if (c < 0)
//     {
//         c += m;
//     }
//     return c;
// }
// int modmul(int a, int b, int m)
// {
//     int c = ((a % m) * (b % m)) % m;
//     if (c < 0)
//     {
//         c += m;
//     }
//     return c;
// }
// void findInverse(int num, int mode)
// {
//     bool check = false;
//     for (int i = 0; i < mode; i++)
//     {
//         if ((num * i) % mode == 1)
//         {
//             cout << "inverse " << i << endl;
//             check = true;
//         }
//     }
//     if (check == false)
//     {
//         cout << "Inverse not Found" << endl;
//     }
// }
// int EGCD(int a, int b, int &x, int &y)
// {
//     if (b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     int x1, y1;
//     int gcd = EGCD(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - (a / b) * y1;
//     return gcd;
// }
// int main()
// {
//     int choice;
//     do
//     {
//         cout << "Menu:\n";
//         cout << "1. Exponentiation\n";
//         cout << "2. Subtraction\n";
//         cout << "3. Modular Addition\n";
//         cout << "4. Modular Multiplication\n";
//         cout << "5. Modular inverse\n";
//         cout << "6. Extended Euclidean Algorithm\n";
//         cout << "7. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         int a, b, m;
//         int x, y;
//         int GCD;
//         switch (choice)
//         {
//         case 1:
//             cout << "Enter base: ";
//             cin >> a;
//             cout << "Enter exponent: ";
//             cin >> b;
//             cout << "Enter modulus: ";
//             cin >> m;
//             exponents(a, b, m);
//             break;
//         case 2:
//             cout << "Enter a: ";
//             cin >> a;
//             cout << "Enter b: ";
//             cin >> b;
//             cout << "Enter modulus: ";
//             cin >> m;
//             subtraction(a, b, m);
//             break;
//         case 3:
//             cout << "Enter a: ";
//             cin >> a;
//             cout << "Enter b: ";
//             cin >> b;
//             cout << "Enter modulus: ";
//             cin >> m;
//             cout << "(a + b) mod m = " << modadd(a, b, m) << endl;
//             break;
//         case 4:
//             cout << "Enter a: ";
//             cin >> a;
//             cout << "Enter b: ";
//             cin >> b;
//             cout << "Enter modulus: ";
//             cin >> m;
//             cout << "(a * b) mod m = " << modmul(a, b, m) << endl;
//             break;
//         case 5:
//             cout << "Enter number to find its inverse" << endl;
//             cin >> a;
//             cout << "Enter mod number" << endl;
//             cin >> m;
//             findInverse(a, m);
//             break;
//         case 6:
//             cout << "Enter a: ";
//             cin >> a;
//             cout << "Enter b: ";
//             cin >> b;
//             GCD = EGCD(a, b, x, y);
//             cout << "GCD: " << GCD << endl;
//             cout << "x: " << x << endl;
//             cout << "y: " << y << endl;
//             break;
//         case 7:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice. Please try again.\n";
//         }
//     } while (choice != 7);
//     return 0;
// }
