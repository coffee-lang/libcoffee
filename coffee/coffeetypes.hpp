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
 * *******************************
 * coffeetypes.hpp
 *
 *  Created on: Oct 11, 2019
 *      Author: vinceh121
 */

#ifndef COFFEETYPES_HPP_
#define COFFEETYPES_HPP_

#include <any>
#include <string>

enum CoffeeType {
	Byte, Char, Int, Long, Float, Double, String, Array, Map, Method, Class, Object
};

std::string get_type_name(CoffeeType type);

struct CoffeePointer {
public:
	const std::string name;
	const CoffeeType type;
};
class CoffeeEntity {
public:
	const CoffeePointer pointer;
	const CoffeeType type;
};
class CoffeeClass: CoffeeEntity {

};

#endif /* COFFEETYPES_HPP_ */
