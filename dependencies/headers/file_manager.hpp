#include <fstream>
#include <string>
#include <iostream>

struct BladeEngineStudioProjectFile
{
    const char* fileExt = "besp";
    int version = 1;
};

void writeCustomFile(const std::string& filename, const std::string& data)
{
    std::ofstream outFile(filename);
    if (outFile.is_open())
    {
            BladeEngineStudioProjectFile header;
            outFile.write(reinterpret_cast<const char*>(&header), sizeof(header));
            outFile.write(data.c_str(), data.length());
            outFile.close();
    }
}

std::string readCustomFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string data;
    if (inFile.is_open()) {
        BladeEngineStudioProjectFile header;
        inFile.read(reinterpret_cast<char*>(&header), sizeof(header));
        // Basic header validation
        if (std::string(header.fileExt, 4) == "besp" && header.version == 1) {
            std::string line;
            while (std::getline(inFile, line)) { // Example for text data
                data += line + "\n";
            }
        }

        else 
        {
            std :: cerr << "[ERROR]: Invalid file format or version." << std::endl;
        }
        inFile.close();
    }
    return data;
}