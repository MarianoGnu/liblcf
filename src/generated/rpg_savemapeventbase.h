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

#ifndef LCF_RPG_SAVEMAPEVENTBASE_H
#define LCF_RPG_SAVEMAPEVENTBASE_H

// Headers
#include <stdint.h>
#include <string>
#include "enum_tags.h"
#include "rpg_moveroute.h"

/**
 * RPG::SaveMapEventBase class.
 */
namespace RPG {
	class SaveMapEventBase {
	public:
		bool active = true;
		int32_t map_id = 0;
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t direction = 2;
		int32_t sprite_direction = 2;
		int32_t anim_frame = 1;
		int32_t transparency = 0;
		int32_t remaining_step = 0;
		int32_t move_frequency = 2;
		int32_t layer = 1;
		bool overlap_forbidden = false;
		int32_t animation_type = 0;
		bool lock_facing = false;
		int32_t move_speed = 3;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		bool route_through = false;
		int32_t anim_paused = 0;
		bool through = false;
		int32_t stop_count = 0;
		int32_t anim_count = 0;
		int32_t max_stop_count = 0;
		bool jumping = false;
		int32_t begin_jump_x = 0;
		int32_t begin_jump_y = 0;
		bool pause = false;
		bool flying = false;
		std::string sprite_name;
		int32_t sprite_id = 0;
		bool processed = false;
		int32_t flash_red = 100;
		int32_t flash_green = 100;
		int32_t flash_blue = 100;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
	};
}

#endif
