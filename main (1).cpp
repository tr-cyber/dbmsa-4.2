
#include <string>
#include <iostream>
#include <stdexcept>
#include "classes.h"

using namespace std;


int main() {

    // Create the index
    LinearHashIndex hashIndex("EmployeeIndex");
    hashIndex.createFromFile("Employee.csv");


    // TODO: You'll receive employee IDs as arguments, process them to retrieve the record, or display a message if not found. 

    return 0;
}

