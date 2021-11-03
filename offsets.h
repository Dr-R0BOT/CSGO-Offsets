
#pragma once

#ifndef CSGO_H

#include <windows.h>

	class Offsets : public Singleton<Offsets>
	{
	public:

		namespace offsets
		{
			std::uintptr_t client_state = 0x589fec;
			std::uintptr_t client_state_generic_precache_table = 0x52a4;
			std::uintptr_t client_state_signon_state = 0x108;
			std::uintptr_t direct3d_device9 = 0xa7050;
			std::uintptr_t dormant = 0xed;
			std::uintptr_t engine_build_number = 0x38cf554;
			std::uintptr_t entity_list = 0x4dbf75c;
			std::uintptr_t force_attack = 0x31efcd4;
			std::uintptr_t force_attack2 = 0x31efce0;
			std::uintptr_t force_backward = 0x31efc8c;
			std::uintptr_t force_forward = 0x31efc98;
			std::uintptr_t force_jump = 0x5269570;
			std::uintptr_t force_left = 0x31efcb0;
			std::uintptr_t force_right = 0x31efca4;
			std::uintptr_t gamerules_proxy = 0x52dc84c;
			std::uintptr_t global_vars = 0x589cf0;
			std::uintptr_t glow_object_manager = 0x5307c48;
			std::uintptr_t input = 0x5210d20;
			std::uintptr_t local_player = 0xda544c;
			std::uintptr_t player_resource = 0x31ee000;
			std::uintptr_t radar_base = 0x51f44d4;
			std::uintptr_t send_packets = 0xd7c22;
			std::uintptr_t studio_hdr = 0x2950;
			std::uintptr_t view_matrix = 0x4db1074;
		};
	};

