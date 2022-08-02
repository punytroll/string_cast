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
