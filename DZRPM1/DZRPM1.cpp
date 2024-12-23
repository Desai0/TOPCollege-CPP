#include <iostream>

static const bool Proverka(const std::string &shedevro_password) {
    if (shedevro_password.length() < 8 && shedevro_password.length() > 14) {
        std::cout << "NO" << std::endl;
        return false;
    }

    bool uppercase = false;
    bool lowercase = false;
    bool cifra = false;
    bool drugoe = false;

    for (const char &c : shedevro_password) {
        if (c < 33 || c > 126) {
            std::cout << "NO" << std::endl;
            return 0;
        }
        if (c >= 65 && c <= 90) {
            uppercase = true;
        }
        else if (c >= 97 && c <= 122) {
            lowercase = true;
        }
        else if (c >= 48 && c <= 57) {
            cifra = true;
        }
        else {
            drugoe = true;
        }
    }

    if ((drugoe + cifra + lowercase + uppercase) >= 3) {
        std::cout << "YES" << std::endl;
        return true;
    }
    else {
        std::cout << "NO" << std::endl;
        return false;
    }
}

int main()
{
    std::string password;
    std::cin >> password;
    std::cout << Proverka(password) << std::endl;
    return 0;
}