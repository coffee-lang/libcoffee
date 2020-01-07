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
 * coffeecontext.cpp
 *
 *  Created on: Jan 7, 2020
 *      Author: vinceh121
 */

#include "coffeecontext.hpp"
#include <unordered_map>



std::unordered_map<CoffeePointer, CoffeeEntity> ctx;

CoffeeEntity CoffeeContext::get(CoffeePointer *pointer) {
	return (ctx[&pointer]);
}

void CoffeeContext::put(CoffeeEntity *entity) {
	ctx[entity->pointer] = &entity;
}



