/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:44:18 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/23 22:11:47 by jpizarro         ###   ########.fr       */
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

	void	announce( void );
	void	setName ( string name );


private:

	string _name;
};

Zombie* zombieHorde( int N, string name );

#endif