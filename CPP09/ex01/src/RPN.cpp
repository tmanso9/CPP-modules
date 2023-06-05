/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:51:34 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/05 17:29:55 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int>			RPN::_operands;
int						RPN::_res;
int						RPN::_modifier;
std::string				RPN::_tokens = "+-*/";

RPN::RPN( void )
{
}

RPN::RPN( RPN const & src )
{
	(void)src;
}

RPN & RPN::operator=( RPN const & src )
{
	(void)src;
	return *this;
}

RPN::~RPN()
{
}

void RPN::calc( std::string input )
{
	std::stringstream	ss(input);
	std::string word;

	if (input.empty()) {
		errOut("");
	}
	if (input.find_last_not_of("0123456789+-/* ") != std::string::npos) {
		errOut(", invalid token");
	}
	if (input.find_first_of("+-*/") == std::string::npos) {
		errOut(", missing operators");
	}

	while ( ss >> word ) {
		if (input.find_first_of("0123456789") == std::string::npos && word.size() > 1) {
			errOut(", invalid token");
		} else if (_tokens.find(word) != std::string::npos ) {
			doOp(word);
		}  else {
			_operands.push(atoi(word.c_str()));
		}
	}
	if (_operands.empty() || _operands.size() > 1) {
		errOut("");
	}
	std::cout << _operands.top() << std::endl;
}

void RPN::doOp( std::string op ) {

	// std::cout << op << "\t" << _tokens.find(op) << std::endl;
	if (_operands.size() < 2) {
		errOut(", invalid format");
	}
	int modifier = _operands.top();
	_operands.pop();
	int original = _operands.top();
	_operands.pop();
	_operands.push(funcs[_tokens.find(op)](original, modifier));
	// if (!_operands.empty()) {
		// _modifier = atoi(_operands.top().c_str());
	// }
	// std::cout << "Before op " << op << " with modifier " << _modifier << " value is " << _res << std::endl;
	// if (_operands.empty()) {
		// _res = funcs[_tokens.find(op)](_res, _modifier);
		// _modifier = 0;
	// } else {
		// _modifier = funcs[_tokens.find(op)](atoi(_operands.top().c_str()), _modifier);
		// _operands.pop();
	// }
	// std::cout << "After, value is " << _res << std::endl;
}

int RPN::add( int total, int n )
{
	return total += n;
}

int RPN::subtract( int total, int n )
{
	return (total -= n);
}

int RPN::multiply( int total, int n )
{
	return (total *= n);
}

int RPN::divide( int total, int n )
{
	if (n == 0) {
		errOut(", cannot divide by 0.");
	}
	return (total /= n);
}

void RPN::errOut( std::string msg )
{
	std::cerr << "Error" << msg << std::endl;
	exit(2) ;
}

int					(*RPN::funcs[4])( int, int ) = {
	&RPN::add,
	&RPN::subtract,
	&RPN::multiply,
	&RPN::divide
};