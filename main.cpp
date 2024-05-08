// OAO230002
// Olutoye Odufowokan
#include <iostream>
#include <string>
#include <fstream>
#include "FileFilter.h"
#include "Encryption.h"
#include "Uppercase.h"
#include "Copy.h"


// Driver pgrogram
int main()
{
    // Variables
    std::string FileName;
    // prompt
    std::cout << "Please input the FileName to be read" << std::endl;
    std::cin >> FileName;
    std::ifstream Input_File(FileName);
    std::ofstream Output_File("EncryptionDefault.txt");
    std::ofstream Output_File2("Encryption12.txt");
    std::ofstream Output_File3("Encryption-4.txt");
    std::ofstream Output_File4("Uppercase.txt");
    std::ofstream Output_File5("Copy.txt");
    // Encryption test
    Encryption obj;
    obj.doFilter(Input_File, Output_File);
    Encryption obj2(12);
    obj.doFilter(Input_File, Output_File2);
    Encryption obj3(-4);
    obj.doFilter(Input_File, Output_File3);
    // Uppercase test
    Uppercase obj4;
    obj4.doFilter(Input_File, Output_File4);
    // Copy test
    Copy obj5;
    obj5.doFilter(Input_File, Output_File5);


    return 0;
}
