/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:21:12 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/09 19:36:35 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		int _Count;
		ISpaceMarine **_Array;

	public:
		Squad();
		~Squad();
		Squad(const Squad &squad);
		Squad &operator=(Squad const &squad);

		int getCount() const;
		ISpaceMarine* getUnit(int index) const;

		int push(ISpaceMarine *unit);
};

#endif