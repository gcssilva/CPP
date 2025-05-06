#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
	private:
		std::stack<int> stk;
	public:
		RPN();
		RPN(RPN const& other);
		RPN& operator=(RPN const& other);
		~RPN();

		
};

#endif