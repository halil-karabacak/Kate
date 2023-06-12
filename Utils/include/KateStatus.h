#pragma once


namespace Kate {
	namespace Utils {
		enum class KateStatus {
			DEFAULT,
			SUCCESS,
			FILE_LOAD_ERROR,
			FILE_WRITE_ERROR,
			ERROR,
			SYNTAX_ERROR,
			// Will be added more on the way.
		};
	}
}
