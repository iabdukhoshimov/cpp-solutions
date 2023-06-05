#include <iostream>
#include <sstream>
#include <stdexcept>

struct Date {
    int day;
    int month;
    int year;
};

Date parseDate(const std::string& dateString) {
    std::istringstream iss(dateString);
    char delimiter;
    Date date;

    // Parse the date components
    if (!(iss >> date.day >> delimiter >> date.month >> delimiter >> date.year) || delimiter != '/') {
        throw std::runtime_error("Invalid date format: " + dateString);
    }

    return date;
}

int main() {
    std::string dateString;
    std::cout << "Enter a date (format: dd/mm/yyyy): ";
    std::cin >> dateString;

    try {
        Date parsedDate = parseDate(dateString);
        std::cout << "Parsed date: " << parsedDate.day << "/" << parsedDate.month << "/" << parsedDate.year << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
