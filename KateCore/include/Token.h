#pragma once

#include <string>
#include <vector>

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
			Token() {

			}
		};
	}
}
