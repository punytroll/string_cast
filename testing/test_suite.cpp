/**
 * Copyright (C) 2007-2022  Hagen Möbius
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
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
