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

#ifndef STRING_CAST__STRING_CAST_H
#define STRING_CAST__STRING_CAST_H

#include <string>
#include <string_view>

template<typename Type>
auto from_string_cast(std::string_view String) -> Type;

template<typename Type>
auto to_string_cast(Type const & Value) -> std::string;

template<typename Type>
auto to_string_cast(Type const & Value, int Precision) -> std::string;

#endif
