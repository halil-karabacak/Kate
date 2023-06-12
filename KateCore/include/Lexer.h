#include <vector>
#include <string>
#include <Token.h>

namespace Kate {
	namespace Core {
		enum class CharType {
			WHITESPACE,
			END_LINE,
			DIGIT,
			OPERATOR,
			LETTER,
			ONE_LINE_COMMENT,
			DEFAULT
		};


		static class ExpressionIdentifier {
		public:
			std::vector<std::string> GetFileContents();
			std::vector<Kate::Core::Token> Tokenize();
			Kate::Core::CharType GetExpressionType(std::string Char);

		private:
			std::string SourceFilePath = "../file.kate";
		};
	}
}

