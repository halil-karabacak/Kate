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
			NEWLINE,
			STRING_QUOTE,
			ONE_LINE_COMMENT,
			DEFAULT
		};


		static class ExpressionIdentifier {
		public:
			std::vector<std::string> GetFileContents();
			std::vector<Kate::Core::Token> Tokenize();
			Kate::Core::CharType GetExpressionType(std::shared_ptr<Kate::Utils::File> File, int index);

		private:
			void Init();
			std::unordered_map<char, CharType> mCharTypeMapping;
		};
	}
}

