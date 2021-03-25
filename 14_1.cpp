#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;

std::string encrypt_caesar(std::string word, int number){
    for(int i = 0;i < word.length();i++){
        word[i] += number;
        if(word[i] > 122)
            word[i] -= 26;
    }
    return word;
}

std::string decrypt_caesar(std::string word, int number){
    for(int i = 0;i < word.length();i++){
        word[i] -= number;
        if(word[i] < 97)
            word[i] += 26;
    }
    return word;
}

int main(){
    int move_number;
    std::string encrypt_word;
    cout << "Input a word that you want to encrypt(small and english letters only): ";
    bool is_wordOK = true;
    do{
        cin >> encrypt_word;
        for(int i = 0;i < encrypt_word.length() && is_wordOK;i++)
            is_wordOK = encrypt_word[i] > 96 && encrypt_word[i] < 123;
    }
    while(!is_wordOK);
    cout << "Input a number(not bigger than 26): ";
    do
        cin >> move_number;
    while(move_number > 25 || move_number < 1);
    encrypt_word = encrypt_caesar(encrypt_word, move_number);
    cout << encrypt_word << endl;
    encrypt_word = decrypt_caesar(encrypt_word, move_number);
    cout << encrypt_word << endl;
    cout << endl;
    return 0;
}
