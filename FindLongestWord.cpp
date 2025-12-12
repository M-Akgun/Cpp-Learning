#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;             
    string longestWord = "";  

   
    cout << "Enter a sentence. Leave a space and type @exit to end:" << endl;

    while (cin >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }

      
        if(word == "@exit"){
            break;
        }
    }

  
    cout << "Longest word: " << longestWord << endl;

    return 0;
}