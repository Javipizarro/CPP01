/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:44:18 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 09:43:03 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using namespace std;


class Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void ) const;
	void	setName ( string const name );


private:

	string _name;
};

Zombie* zombieHorde( int N, string name );

#endif