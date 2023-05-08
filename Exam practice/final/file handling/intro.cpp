//The abstraction of data source and data sink is what's termed as stream.

//Stream is data abtraction for input/output of data to and from the program.

//In C++, the file stream classes are designed with the idea that the file should simply be viewed as stream or array or sequence of byte. 

//Often the file representing the data file is represented by index between 0 and len-1, where len is the total number of bytes in the entire file.

/*
There are two types of pointer in the file stream of cpp.

1. Read pointer. This pointer points to the next character in the file which will be real if a read command is issued next. When the read command is executed, the pointer will point to the next character in the file being read.

2. Write pointer: This pointer points to the next position where the character is to be written. After the execution of next write command, the write pointer move to the next logation in the file being written.

Basic operation on text/binary files are: 
Reading/Writing, Reading, manipulation of the data stored inthe file.

C++ has support for both input and output of the file through these classes.
1. ifstream: 
2. ofstream:
3. fstream:


When a file stream is created and linked with a real file, the file stream is accessable with the help of object's name.

Here is a tricky part;
ios::in opens the file for reading
ios::out opens the file for writing
ios::ate Initial position: end of the file
ios::app Append the file at the end of the file
ios::trunk:: If the file exists then it is erased.
ios::binary Binary mode

The default mode of ofstream is ios::out|ios::in
The default mode of fstream is ios::out|ios::in
The default mode of ifstream is ios::in




*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fin;
    //file object
    fin.open("file1.txt");
    string str;
    fin.put('c');
    getline(fin,str);
    cout<<str<<endl;

    return 0;
}