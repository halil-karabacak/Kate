#include <memory>
#include <string>
#include <KateStatus.h>
#include <File.h>

namespace Kate {
	namespace Utils {
		enum class FileType {
			KATE,
			KATE_LLVM,
			KATE_CPP,
		};
		static class FileHandler {
			std::pair<std::shared_ptr<Kate::Utils::File>, Kate::Utils::KateStatus> LoadFile(const std::string& filePath);
			Kate::Utils::KateStatus SaveFile(std::shared_ptr<Kate::Utils::File>& file, std::string& path, Kate::Utils::FileType FileType = Kate::Utils::FileType::KATE);
		};
	}
}