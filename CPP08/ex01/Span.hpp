#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:

	unsigned int size;
	std::vector<int> numbers;
	Span();

public:

	Span(const Span& span);
	Span& operator=(const Span& span);
	Span(const unsigned int n);
	void addNumber(const int n);
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	int getSize() const;
	~Span();
	class NoSpaceLeftExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Can't add more numbers";}
	};
	class NoSpanExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "No span possible";}
	};
};

#endif