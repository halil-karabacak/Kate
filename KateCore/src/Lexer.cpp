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

		void ExpressionIdentifier::Init() {
			mCharTypeMapping[' '] = CharType::WHITESPACE;
			mCharTypeMapping['\n'] = CharType::NEWLINE;
			mCharTypeMapping[';'] = CharType::END_LINE;

			for (char c = 'a'; c <= 'z'; ++c)
				mCharTypeMapping[c] = CharType::LETTER;

			for (char c = 'A'; c <= 'Z'; ++c)
				mCharTypeMapping[c] = CharType::LETTER;

			mCharTypeMapping['_'] = CharType::LETTER;

			for (char c = '0'; c <= '9'; ++c)
				mCharTypeMapping[c] = CharType::DIGIT;

			mCharTypeMapping['#'] = CharType::ONE_LINE_COMMENT;
			mCharTypeMapping['"'] = CharType::STRING_QUOTE;

			// Op-string types 
		}
	}
}