#include "..\include\FileHandler.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

namespace Kate {
	namespace Utils {
		std::pair<std::shared_ptr<Kate::Utils::File>, Kate::Utils::KateStatus> FileHandler::LoadFile(const std::string& filePath)
		{
            std::vector<std::string> fileLines;

            std::ifstream file(filePath);

            if (!file.is_open()) {
                std::cerr << "Failed to open file: " << filePath << std::endl;
                return std::pair(nullptr, Kate::Utils::KateStatus::FILE_LOAD_ERROR);
            }

            std::string line;
            while (std::getline(file, line)) {
                fileLines.push_back(line);
            }

            return std::pair(std::make_shared<File>(fileLines), Kate::Utils::KateStatus::SUCCESS);
		}

        Kate::Utils::KateStatus FileHandler::SaveFile(std::shared_ptr<Kate::Utils::File>& file, std::string& path, Kate::Utils::FileType FileType)
        {
            std::ofstream outputFile(path);

            switch (FileType)
            {
            case Kate::Utils::FileType::KATE:
                path = path + ".kate";
                break;
            case Kate::Utils::FileType::KATE_LLVM:
                path = path + ".lli";
                break;
            case Kate::Utils::FileType::KATE_CPP:
                path = path + ".cpp";
                break;
            default:
                return Kate::Utils::KateStatus::FILE_WRITE_ERROR;
            }

            if (!outputFile.is_open()) {
                std::cerr << "Failed to open file for writing: " << path << std::endl;
                return Kate::Utils::KateStatus::FILE_WRITE_ERROR;
            }

            for (const auto& line : file->lines) {
                outputFile << line << std::endl;
            }

            outputFile.close();
            return Kate::Utils::KateStatus::SUCCESS;
        }
	}
}