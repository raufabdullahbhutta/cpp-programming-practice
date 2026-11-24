#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<< "Enter character of Alphabets." ;
    cin>> alphabet;
    if ( alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        cout<< "Vowel" ;
    }
    else
    cout<< "consonant" ;
    return 0;
}