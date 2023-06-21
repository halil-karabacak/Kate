#pragma once

#include <string>
#include <memory>
#include <vector>
#include <KateStatus.h> // .
#include <unordered_map>

enum class Associativity {
	LEFT,
	RIGHT,
	DEFAULT
};

enum class Precedence {
	LOOP,
	IF_OP,
	OR,
	AND,
	EQUAL,
	NOT_EQUAL,
	GREATER,
	LESS,
	GREATER_EQ,
	LESS_EQ,
	PLUS,
	MINUS,
	MUL,
	DIV,
	MOD,
	DOT,
	OPEN_P,
	CLOSE_P
};


class OperatorBase
{
public:
	const std::string GetOpString();
	const Precedence GetPrecdence();
	const bool IsOverloadEnabled();
	void AddOperator();
	static void Init();
	

private:


};

