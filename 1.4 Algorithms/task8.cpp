#include <iostream>
#include <fstream>
#include <openssl/md5.h>

bool verifyFileIntegrity(const std::string& filePath, const std::string& expectedHash) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open the file: " << filePath << std::endl;
        return false;
    }

    MD5_CTX md5Context;
    MD5_Init(&md5Context);

    const size_t bufferSize = 4096;
    char buffer[bufferSize];
    while (file.read(buffer, bufferSize)) {
        MD5_Update(&md5Context, buffer, bufferSize);
    }

    if (!file.eof() && file.gcount() > 0) {
        MD5_Update(&md5Context, buffer, file.gcount());
    }

    unsigned char hashResult[MD5_DIGEST_LENGTH];
    MD5_Final(hashResult, &md5Context);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setfill('0') << std::setw(2) << static_cast<unsigned int>(hashResult[i]);
    }
    std::string calculatedHash = ss.str();

    if (calculatedHash == expectedHash) {
        std::cout << "File integrity verified. The MD5 hash matches." << std::endl;
        return true;
    } else {
        std::cout << "File integrity verification failed. The MD5 hash does not match." << std::endl;
        return false;
    }
}

int main() {
    std::string filePath = "path/to/file.txt";
    std::string expectedHash = "9d4e1e23bd5b727046a9e3b4b7db57bd";

    bool integrityVerified = verifyFileIntegrity(filePath, expectedHash);

    if (integrityVerified) {
        std::cout << "File integrity verified. Proceed with further processing." << std::endl;
    } else {
        std::cerr << "File integrity verification failed. Abort further processing." << std::endl;
    }

    return 0;
}
