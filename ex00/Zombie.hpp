/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:44:18 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 09:42:19 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using namespace std;


class Zombie {

public:

	Zombie(string const name);
	~Zombie(void);

	void	announce( void ) const;

private:

	string _name;
};

Zombie	*newZombie( string name );
void	randomChump( string name );

#endif