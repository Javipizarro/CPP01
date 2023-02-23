/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:44:18 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/23 19:29:58 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using namespace std;


class Zombie {

public:

	Zombie(string name);
	~Zombie(void);

	void	announce( void );

private:

	string _name;
};

Zombie	*newZombie( string name );
void	randomChump( string name );

#endif