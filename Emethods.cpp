#include <iostream>
#include <string>
using namespace std;
string ROT13smaller(string A)
{
	string shift="";
	for(int i = 0; i < A.size(); i++)
    {
       shift+= char(((int)A[i]-84) % 26 + 97 );
    }
    return shift;
}
string ROT13capital(string A)
{
	string shift="";
	for(int i = 0; i < A.size(); i++)
    {
       shift+= char(((int)A[i]-13+65) % 26 + 65 );
    }
    return shift;
}
int main()
{
    string plain_textS = "az";
    string plain_textL = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string encrypted="";
    string decrypted="";
    encrypted =ROT13smaller(plain_textS);
    cout<<"Encrypted"<<endl;
    cout<<encrypted<<endl;
    decrypted =ROT13smaller(encrypted);
    cout<<"Orignal"<<endl;
    cout<<decrypted<<endl;
    encrypted =ROT13capital(plain_textL);
    cout<<"Encrypted"<<endl;
    cout<<encrypted<<endl;
    decrypted =ROT13capital(encrypted);
    cout<<"Orignal"<<endl;
    cout<<decrypted<<endl;
    return 0;
}
