/*
 * libcoffee, commons for the Coffee runtime components
 * Copyright (C) 2019 Coffee Developers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * ***************************
 * coffeecontext.hpp
 *
 *  Created on: Dec 20, 2019
 *      Author: vinceh121
 */

#ifndef COFFEE_COFFEECONTEXT_HPP_
#define COFFEE_COFFEECONTEXT_HPP_

#include "coffeetypes.hpp"

class CoffeeContext {
public:
	CoffeeEntity get(CoffeePointer *pointer);
	void put(CoffeeEntity *entity);
};




#endif /* COFFEE_COFFEECONTEXT_HPP_ */
