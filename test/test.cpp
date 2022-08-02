/**
 * Copyright (C) 2007-2022  Hagen Möbius
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**/

#include <cassert>
#include <string>

#include <string_cast/string_cast.h>

using namespace std::string_literals;

auto main([[maybe_unused]] int argc, [[maybe_unused]] char * argv[]) -> int
{
	assert(from_string_cast<unsigned int>("123") == 123);
	assert(from_string_cast<signed int>("-163") == -163);
	assert(to_string_cast(34.56f) == "34.56");
	assert(to_string_cast(34.56) == "34.56");
	assert(from_string_cast<float>("123") == 123.0f);
	assert(from_string_cast<double>("-163.345") == -163.345);
	assert(to_string_cast(-4) == "-4");
	assert(to_string_cast(true) == "true");
	assert(to_string_cast(false) == "false");
	assert(from_string_cast<bool>("true") == true);
	assert(from_string_cast<bool>("false") == false);
	assert(from_string_cast<bool>("True") == false);
	assert(from_string_cast<bool>("1") == false);
	assert(to_string_cast(static_cast<std::uint8_t>(8)) == "8");
	assert(to_string_cast(static_cast<std::uint8_t>(-432)) == "80");
	assert(from_string_cast<std::uint8_t>("8") == 8);
	assert(to_string_cast("Testing"s) == "Testing");
	assert(from_string_cast<std::string>("Testing"s) == "Testing");
	assert(to_string_cast(static_cast<std::uint16_t>(4021)) == "4021");
	assert(from_string_cast<std::uint16_t>("231") == 231);
	
	return 0;
}
