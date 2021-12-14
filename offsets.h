
#pragma once

#ifndef CSGO_H

#include <windows.h>

	class Offsets : public Singleton<Offsets>
	{
	public:

		namespace offsets
{
	std::uintptr_t client_state = 0x589fc4;
	std::uintptr_t client_state_generic_precache_table = 0x52a4;
	std::uintptr_t client_state_signon_state = 0x108;
	std::uintptr_t direct3d_device9 = 0xa5050;
	std::uintptr_t dormant = 0xed;
	std::uintptr_t engine_build_number = 0x38cf5d4;
	std::uintptr_t entity_list = 0x4dcfa64;
	std::uintptr_t force_attack = 0x31fff74;
	std::uintptr_t force_attack2 = 0x31fff80;
	std::uintptr_t force_backward = 0x31fffc8;
	std::uintptr_t force_forward = 0x31fffbc;
	std::uintptr_t force_jump = 0x527995c;
	std::uintptr_t force_left = 0x31fffd4;
	std::uintptr_t force_right = 0x31fffe0;
	std::uintptr_t gamerules_proxy = 0x52ec9dc;
	std::uintptr_t global_vars = 0x589cc8;
	std::uintptr_t glow_object_manager = 0x5317de8;
	std::uintptr_t input = 0x5221038;
	std::uintptr_t local_player = 0xdb458c;
	std::uintptr_t player_resource = 0x31fe300;
	std::uintptr_t radar_base = 0x52047dc;
	std::uintptr_t send_packets = 0xd9372;
	std::uintptr_t studio_hdr = 0x2950;
	std::uintptr_t view_matrix = 0x4dc1364;
}

