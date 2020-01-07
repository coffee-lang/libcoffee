/*
 * CoffeePot, the official VM for the Coffee programming language.
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
 * coffeestack.cpp
 *
 *  Created on: Jan 7, 2020
 *      Author: vinceh121
 */

#include "coffeestack.hpp"
#include <stack>

std::stack<CoffeePointer> stc;

CoffeePointer* CoffeeStack::pop() {
	return (stc.pop());
}

void CoffeeStack::push(CoffeePointer *pointer) {
	if (pointer->type == CoffeeType::Method
			|| pointer->type == CoffeeType::Class) {
		stc.push(*pointer);
	} else {
		throw std::invalid_argument("test");
	}
}

