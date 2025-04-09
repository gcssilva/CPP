#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(const unsigned int n) : size(n) {}

Span::Span(const Span& span) : size(span.getSize()) {
	*this = span;
}

Span& Span::operator=(const Span& span) {
	size = span.size;
	numbers = span.numbers;
	return *this;
}

int Span::getSize() const {
	return size;
}

void Span::addNumber(const int n) {
	if (numbers.size() == size) {
		throw Span::NoSpaceLeftExeption();
	}
	numbers.push_back(n);
	std::sort(this->numbers.begin(), this->numbers.end());
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if ((size - numbers.size()) < static_cast<unsigned int>(end - begin)) {
		throw Span::NoSpaceLeftExeption();
	}
	numbers.insert(numbers.end(), begin, end);
	std::sort(numbers.begin(), numbers.end());
}

int Span::shortestSpan() {
	if (numbers.size() <= 1) {
		throw Span::NoSpanExeption();
	}
	int shortSpan = __INT_MAX__;
	for (std::vector<int>::iterator i = numbers.begin(); i != (numbers.end() - 1); ++i) {
		if (shortSpan > (*(i + 1) - *i)) {
			shortSpan = *(i + 1) - *i;
		}
	}
	return shortSpan;
}

int Span::longestSpan() {
	if (numbers.size() <= 1) {
		throw Span::NoSpanExeption();
	}
	return numbers.back() - numbers.front();
}

Span::~Span() {}