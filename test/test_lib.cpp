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
 * test_lib.cpp
 *
 *  Created on: Dec 13, 2019
 *      Author: vinceh121
 */

#include "../coffee/coffeetypes.hpp"
#include <iostream>

int main(void) {
	std::cout << "Byte: " << get_type_name(CoffeeType::Byte) << "\n";
}

