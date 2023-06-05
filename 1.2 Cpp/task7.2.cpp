#include <exception>
#include <string>

class BaseException : public std::exception {
protected:
    std::string message;

public:
    explicit BaseException(const std::string& errorMessage) : message(errorMessage) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class InvalidInputException : public BaseException {
public:
    explicit InvalidInputException(const std::string& errorMessage) : BaseException(errorMessage) {}
};

class OutOfBoundsException : public BaseException {
public:
    explicit OutOfBoundsException(const std::string& errorMessage) : BaseException(errorMessage) {}
};

class FileIOException : public BaseException {
public:
    explicit FileIOException(const std::string& errorMessage) : BaseException(errorMessage) {}
};

int main() {
    try {
        throw InvalidInputException("Invalid input detected.");
    } catch (const InvalidInputException& e) {
        std::cout << "Caught InvalidInputException: " << e.what() << std::endl;
    } catch (const BaseException& e) {
        std::cout << "Caught BaseException: " << e.what() << std::endl;
    }

    try {
        throw OutOfBoundsException("Array index out of bounds.");
    } catch (const OutOfBoundsException& e) {
        std::cout << "Caught OutOfBoundsException: " << e.what() << std::endl;
    } catch (const BaseException& e) {
        std::cout << "Caught BaseException: " << e.what() << std::endl;
    }

    try {
        throw FileIOException("Error while reading file.");
    } catch (const FileIOException& e) {
        std::cout << "Caught FileIOException: " << e.what() << std::endl;
    } catch (const BaseException& e) {
        std::cout << "Caught BaseException: " << e.what() << std::endl;
    }

    return 0;
}
