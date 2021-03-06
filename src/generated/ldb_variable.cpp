/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read Variable.

template <>
char const* const Struct<RPG::Variable>::name = "Variable";

template <>
Field<RPG::Variable> const* Struct<RPG::Variable>::fields[] = {
	new TypedField<RPG::Variable, std::string>(
		&RPG::Variable::name,
		LDB_Reader::ChunkVariable::name,
		"name",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Variable>;
