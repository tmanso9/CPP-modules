/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:47:45 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/05 16:54:07 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
# include <stack>

class RPN
{
	private:
		RPN( void );
		RPN( RPN const & );
		RPN & operator=( RPN const & );
		
		static std::stack<int> _operands;
		static int			_res;
		static int			_modifier;
		static std::string	_tokens;
		static int (*funcs[4])( int, int );

		static void	doOp( std::string );
		static int	add( int, int );
		static int	subtract( int, int );
		static int	multiply( int, int );
		static int	divide( int, int );

		static void	errOut( std::string );
		
	public:
		~RPN();
		
		static void calc( std::string );
};

#endif // !RPN_HPP