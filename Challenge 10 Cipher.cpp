#include <iostream>
#include <string>

int main() {
    using namespace std;

    string alphabet{ " $abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "$ XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    string secret_message{};
    cout << "Enter your secret message." << endl;
    getline(cin, secret_message);

    cout << "Your secret message is: " << "'" << secret_message << "'" << endl;

    string encrypted_message{};

    cout << "\nEncrypting message..." << endl;

    for (char c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char{ key.at(position) };
            encrypted_message += new_char;

        }
        else {
            encrypted_message += c;
        }

    }
    cout << "\n Encryption complete" << endl;

    cout << "\n Encrypted Message: " << encrypted_message << endl;

    string decrypted_message{};

    cout << "\nDecrypting Message..." << endl;

    for (char c : encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char{ alphabet.at(position) };
            decrypted_message += new_char;

        }
        else {
            decrypted_message += c;
        }

    }
    cout << "\n Decryption completed!" << endl;
    cout << "\n Your decrypted message is: " << decrypted_message << endl;
    return 0;
}