#include <iostream>
#include <string>

// Define a structure for a person
struct Person {
    std::string name;
    int age;
    std::string address;
};

int main() {
    // Create an instance of the Person structure
    Person person;

    // Assign values to the structure members
    person.name = "John Doe";
    person.age = 25;
    person.address = "123 Main Street";

    // Output the values of the structure members
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Address: " << person.address << std::endl;

    return 0;
}

