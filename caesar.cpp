#include <iostream>
#include <random>
#include <cstdlib>
#include <string.h>
using namespace std;

int decrypt()
{
    char charArr[27] = {'a', 'b', 'c', 'd', 'e',
    'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y',
    'z'};
    char encryptedArray[1024];
    char userMessageArray[1024];
    string enterString;
    int key;
    cout<<"Enter the encrypted message\n";
    cin>>enterString;
    cout<<"Enter the secret key\n";
    cin>>key;
    strcpy(encryptedArray, enterString.c_str());
     int i = 0;
     int k = 0;
     while(true)
     {
          for(k = 0; k < 27; k++){
         if (charArr[k] == encryptedArray[i])
         {
             userMessageArray[i] = charArr[k-key];
         }
          }
         if(encryptedArray[i] == '\0')
            break;
            i++;
     }

     i=0;
     cout<<"The decrypted word is: '";
     while(true)
     {
         if(encryptedArray[i] == '\0'){
            break;}

            else{
                cout<<userMessageArray[i];
            }
 i++;
     }
     cout<<"'";

}


void encrypt(string userInput, int keyNumRotation)
{
    int i = 0;
    int k = 0;
    char charArr[27] = {'a', 'b', 'c', 'd', 'e',
    'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y',
    'z'};
    char userMessageArray[1024];
    char encryptedArray[1024];
   strcpy(userMessageArray, userInput.c_str());
     for(int i=0; i<1000; i++)
    {
        for(k = 0; k < 27; k++)
        {
          if (charArr[k] == userMessageArray[i])
          {
              if(k+keyNumRotation > 27)
              {
                encryptedArray[i] = charArr[k+keyNumRotation-27];
              }
              else{
                encryptedArray[i] = charArr[k+keyNumRotation];
              }
             break;
          }

        }


    }

    i=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   cout<< "The Encoded Text is '";
    while(true)
    {
         if(userMessageArray[i] == '\0' )
           break;

    else{cout<< encryptedArray[i];}

i++;

    }
    cout<<"'";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
}

void input()
{
    string userInput;
    cout<<"Enter the text you want to encrypt(spaces&CAPSLOCK aren't allowed)\n Start Entering: \n";
    getline(cin, userInput);
    int keyNumRotation;
cout<<"Enter the encryption key:\n";
    cin>>keyNumRotation;
    encrypt(userInput,keyNumRotation);
}

int main()
{
    int userInput;
    cout<<"Welcome\n'1' - encrypt\n'2' - decrypt\n";
    cin>>userInput;
    cin.ignore();
    if(userInput == 1)
    input();
    else if(userInput == 2)
        decrypt();
        else{cout<<"Wrong input"; main();}

}
