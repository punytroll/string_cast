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

#include <cstdint>
#include <iomanip>
#include <sstream>

#include "string_cast.h"

template<>
auto from_string_cast<std::uint8_t>(std::string_view String) -> std::uint8_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::uint16_t{};
	
	StringStream >> Result;
	
	return static_cast<std::uint8_t>(Result);
}

template<>
auto from_string_cast<std::uint16_t>(std::string_view String) -> std::uint16_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::uint16_t{};
	
	StringStream >> Result;
	
	return static_cast<std::uint16_t>(Result);
}

template<>
auto from_string_cast<std::uint32_t>(std::string_view String) -> std::uint32_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::uint32_t{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<std::uint64_t>(std::string_view String) -> std::uint64_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::uint64_t{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<std::int8_t>(std::string_view String) -> std::int8_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::int16_t{};
	
	StringStream >> Result;
	
	return static_cast<std::int8_t>(Result);
}

template<>
auto from_string_cast<std::int16_t>(std::string_view String) -> std::int16_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::int16_t{};
	
	StringStream >> Result;
	
	return static_cast<std::int16_t>(Result);
}

template<>
auto from_string_cast<std::int32_t>(std::string_view String) -> std::int32_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::int32_t{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<std::int64_t>(std::string_view String) -> std::int64_t
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = std::int64_t{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<float>(std::string_view String) -> float
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = float{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<double>(std::string_view String) -> double
{
	auto StringStream = std::istringstream{std::string{String}};
	auto Result = double{};
	
	StringStream >> Result;
	
	return Result;
}

template<>
auto from_string_cast<bool>(std::string_view String) -> bool
{
	return String == "true";
}

template<>
auto from_string_cast<std::string>(std::string_view Value) -> std::string
{
	return std::string{Value};
}

template<>
auto to_string_cast<std::uint8_t>(std::uint8_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << static_cast<std::uint32_t>(Value);
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::uint16_t>(std::uint16_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << static_cast<std::uint32_t>(Value);
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::uint32_t>(std::uint32_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::uint64_t>(std::uint64_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::int8_t>(std::int8_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << static_cast<std::int32_t>(Value);
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::int16_t>(std::int16_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::int32_t>(std::int32_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<std::int64_t>(std::int64_t const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<float>(float const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast(float const & Value, int Precision) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << std::fixed << std::setprecision(Precision) << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast(double const & Value, int Precision) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << std::fixed << std::setprecision(Precision) << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<double>(double const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<void *>(void * const & Value) -> std::string
{
	auto StringStream = std::ostringstream{};
	
	StringStream << Value;
	
	return StringStream.str();
}

template<>
auto to_string_cast<bool>(bool const & Value) -> std::string
{
	if(Value == true)
	{
		return "true";
	}
	else
	{
		return "false";
	}
}

template<>
auto to_string_cast<std::string>(std::string const & Value) -> std::string
{
	return Value;
}
