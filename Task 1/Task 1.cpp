#include <iostream>
#include <string>

std::string Fullname;
char Initial;
int age;
int Nr;
std::string bday;

int main()
{
    std::cout << "Please write your full name: ";
    std::getline(std::cin, Fullname);
    std::cout << "And the initial of your first name?: ";
    std::cin >> Initial;
    std::cout << "Now how old are you?: ";
    std::cin >> age;
    std::cout << "May i ask your number?: ";
    std::cin >> Nr;
    std::cout << "Finally, what is your date of birth?: ";
    std::cin >> bday;

    std::cout << "===========================\n";
    std::cout << "|| Name      ||" << Fullname << "\n";
    std::cout << "|| Initial   ||" << Initial << "\n";
    std::cout << "|| Age       ||" << age << "\n";
    std::cout << "|| Phone nr. ||" << Nr << "\n";
    std::cout << "|| Birthday  ||" << bday << "\n";
    std::cout << "===========================";

}
