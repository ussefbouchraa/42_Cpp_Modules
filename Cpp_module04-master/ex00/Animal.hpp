#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( Animal const& src );
		Animal&	operator=( const Animal& src );

		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif