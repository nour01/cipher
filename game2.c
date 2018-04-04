
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>



using namespace std;

int main()
{
    char letters[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char ciphers[26]= {'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m'};
    string sentence;
    cout << "\aGood Morning \nWhat do you like to do today ?" << endl;
    cout << "\t 1. Cipher Message" << endl;
    cout << "\t 2. Decipher Message" << endl;
    cout << "\t 3. End" << endl;
    cout << "\nEnter Your Choice : ";
    int nChoice ;
    cin >> nChoice ;
    cout << endl;

    if (nChoice==1)
    {
        cout << "Enter the Message to Cipher : ";
        cin.ignore();
        getline(cin,sentence);
        cout << "\n The Ciphered Message is : ";
        for (int i=0; i<sentence.size(); i++)
        {
            sentence[i]=char(tolower(sentence[i]));
            if (sentence[i]>122 ||sentence[i]<97)
            {
                cout << sentence[i];
                continue;
            }
            if (sentence[i]=='1' || sentence[i]=='2' ||sentence[i]=='3' ||sentence[i]=='4' || sentence[i]=='5' || sentence[i]=='6' || sentence[i]=='7' ||sentence[i]=='8' || sentence[i]=='9' || sentence[i]=='0')
                cout << sentence[i];
            else if (sentence[i]==' ')
                cout << ' ';
            else
            {
                for (int k=0; k<26; k++)
                {
                    if (sentence[i]==letters[k])
                    {
                        cout << ciphers[k];
                        break;
                    }
                }
            }

        }
    }

    if (nChoice==2)
    {
        cin.ignore();
        cout << "Enter the Ciphered Message : ";
        getline(cin,sentence);
        cout << "The Deciphered Message is : ";
        for (int i=0; i<sentence.size(); i++)
        {
            sentence[i]=char(tolower(sentence[i]));
            if (sentence[i]=='1' || sentence[i]=='2' ||sentence[i]=='3' ||sentence[i]=='4' || sentence[i]=='5' || sentence[i]=='6' || sentence[i]=='7' ||sentence[i]=='8' || sentence[i]=='9' || sentence[i]=='0')
                cout << sentence[i];
            else if (sentence[i]==' ')
                cout << ' ';
            else
            {
                for (int k=0; k<26; k++)
                {
                    if (sentence[i]==ciphers[k])
                    {
                        cout << letters[k];
                        break;
                    }
                }
            }

        }
    }

    if (nChoice==3)
    {
        cout << "Good Bye " << endl;
        return 0;
    }
    return 0;
