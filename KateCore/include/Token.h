#pragma once

#include <string>
#include <vector>
#include <memory>
#include <OperatorBase.h>

class Kate::Utils::File;

namespace Kate {
	namespace Core {
		enum class TokenType {
			WHITESPACE,
			END_LINE,
			IDENTIFIER,
			LITERAL,
			OPERATOR,
			ONE_LINE_COMMENT,
			DEFAULT
		};

		class Token {

		public:
			Token(std::string TextIn, std::shared_ptr<Kate::Utils::File> File, int FileIndex, int LineIndex, Kate::Core::TokenType TokenTypeIn);
		};
	}
}
