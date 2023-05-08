#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) : name(name), age(age) {}
};

int main() {
    // Create a student object
    Student student("John Doe", 21);

    // Open a binary file for writing
    ofstream outfile("students.bin", ios::binary);

    // Write the student object to the file
    outfile.write(reinterpret_cast<char*>(&student), sizeof(Student));

    // Write an integer to the file
    int num = 42;
    outfile.write(reinterpret_cast<char*>(&num), sizeof(int));

    // Close the file
    outfile.close();

    // Open the binary file for reading
    ifstream infile("students.bin", ios::binary);

    // Read the student object from the file
    Student read_student("", 0);
    infile.read(reinterpret_cast<char*>(&read_student), sizeof(Student));
    cout << "Student name: " << read_student.name << ", age: " << read_student.age << endl;

    // Read the integer from the file
    int read_num = 0;
    infile.read(reinterpret_cast<char*>(&read_num), sizeof(int));
    cout << "Read integer: " << read_num << endl;

    // Close the file
    infile.close();

    return 0;
}