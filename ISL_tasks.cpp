//Raja Umer Saleem 2023-cs-609
//#include <iostream>
//#include <string>
//using namespace std;
////int main()
////{
////    // char a='a';
////    // int ascii =int(a);
////    // cout<<ascii<<endl;
////    string s;
////    cin >> s;
////    int key = 0;
////    cin >> key;
////    int n = s.length();
////    string encryption;
////    for (int i = 0; i < n; i++)
////    {
////        int ascii = int(s[i]);
////        cout<<ascii<<endl;
////        ascii += key;
////        if (ascii < 65)
////        {
////            ascii=ascii%65;
////        }
////        else if (ascii > 123)
////        {
////            ascii = ascii % 123;
////        }
////        encryption += char(ascii);
////    }
////    cout << "Encryption String " << encryption << endl;
////    int delen = encryption.length();
////    string decrypt = "";
////    for (int i = 0; i < delen; i++)
////    {
////        int ascii = int(encryption[i]);
////        ascii -= key;
////        cout<<ascii<<endl;
////       if (ascii < 65)
////        {
////            ascii=ascii%65;
////        }
////        else if (ascii > 123)
////        {
////            ascii = ascii % 123;
////        }
////        decrypt += char(ascii);
////    }
////    cout << "DEcyption String " << decrypt << endl;
////    return 0;
////}
//
//
//#include <iostream>
//using namespace std;
//string encrypt(string text, int s)
//{
//string result = "";
//for (int i = 0; i < text.length(); i++) {
//if (isupper(text[i]))
//result += char(int(text[i] + s - 65) % 26 + 65);
//else
//result += char(int(text[i] + s - 97) % 26 + 97);
//}
//return result;
//}
//string decrypt(string text, int s)
//{
//string result = "";
//for (int i = 0; i < text.length(); i++) {
//if (isupper(text[i]))
//result += char(int(text[i] - s - 65 + 26) % 26 + 65);
//else
//result += char(int(text[i] - s - 97 + 26) % 26 + 97);
//}
//return result;
//}
//int main()
//{
//string text = "Umer";
//int s = 3;
//while(s!=0)
//{
//cout << "Text : " << text;
//cout << "\nShift: " << s;
//string encrypt_text = encrypt(text, s);
//cout << "\nCipher: " << encrypt_text;
//if(encrypt_text=="SYFXUH")
//cout<<"Key matched "<<s<<endl;
//cout << "\nDe-cipher: " << decrypt(encrypt_text, s);
//cin>>s;
//}
//return 0;
//}
//
//



// 2nd Manual
// Q1:
// program takes two numbers a and b to find a mod bitand?
// #include <iostream>
// using namespace std;
// int modtake(int a, int b)
// {
//     int c = a % b;
//     return c;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     cout << "a mod b = " << modtake(a,b) << endl;
//     return 0;
// }
// Q#2Create a program that checks if a number n is divisible by m using modular
// arithmetic.
// #include <iostream>
// using namespace std;
// int divcheck(int a, int b)
// {
//     int c = a % b;
//     return c;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     int c = divcheck(a, b);
//     if(c==0)
//     {
//         cout << "a is divisible by b" << endl;
//     }
//     else
//     {
//         cout << "a is not divisible by b" << endl;
//     }
//     return 0;
// }

// Q#3Implement functions for modular addition and multiplication:
//  (a+b)mod m
//  (a×b)mod m
// #include <iostream>
// using namespace std;
// int modadd(int a, int b, int m)
// {
//     int c = (a + b) % m;
//     return c;
// }
// int modmul(int a, int b, int m)
// {
//     int c = (a * b) % m;
//     return c;
// }
// int main()
// {
//     int a, b, m;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     cout << "Enter m: ";
//     cin >> m;
//     cout << "(a+b)mod m = " << modadd(a, b, m) << endl;
//     cout << "(a*b)mod m = " << modmul(a, b, m) << endl;
//     return 0;
// }
// Q#4//Euclidean GCD

//#include <iostream>
//#include <string>
//using namespace std;
//int euclidean_GCD(int a, int b)
//{
//	if(b==0)
//	{
//		cout<<"Euclidean_GCD = "<<a<<endl;
//		return a;
//	}
//	euclidean_GCD(b,a%b);
//}
//int main()
//{
//	int a=56;
//	int b=98;
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	euclidean_GCD(a,b);
//	return 0;
//}

//output
//a = 56
//b = 98
//Euclidean_GCD = 14
