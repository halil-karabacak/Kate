#include <Lexer.h>
#include <File.h>
#include <Token.h>

#include <vector>
#include <unordered_map>

namespace Kate {
	namespace Core {
		std::vector<std::string> ExpressionIdentifier::GetFileContents()
		{
			return std::vector<std::string>();
		}
		std::vector<Kate::Core::Token> Kate::Core::ExpressionIdentifier::Tokenize()
		{
			int line = 0;
			int rowIndex = 0;
		}
		Kate::Core::CharType ExpressionIdentifier::GetExpressionType(std::shared_ptr<Kate::Utils::File> File, int index)
		{
			return Kate::Core::CharType();
		}
	}
}