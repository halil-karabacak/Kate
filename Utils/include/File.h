#pragma once

#include <vector>


namespace Kate {
	namespace Utils {
		class File
		{
		public:
			File(const std::vector<std::string> lines) : lines(lines), numberOfLines(lines.size()) {}
			std::vector<std::string> lines;
			int numberOfLines;
			inline std::string GetLine(int index) { return lines[index];  }
		};
	}
}
