#pragma once

#include <tr1/cstdint>

class Writer {

public:
	virtual ~Writer() {}

	virtual void writeMarkup(const char c) = 0;
	virtual void writeVisibleText(const char c) = 0;
	virtual void writeVisibleText_escaped(const char c) = 0;

};
