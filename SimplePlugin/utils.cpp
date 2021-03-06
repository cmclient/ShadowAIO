#include "../plugin_sdk/plugin_sdk.hpp"
#include "utils.h"

#pragma once
namespace utils
{

	bool has_unkillable_buff(game_object_script target)
	{
		return target->has_buff({ buff_hash("UndyingRage"), buff_hash("ChronoShift"), buff_hash("KayleR"), buff_hash("KindredRNoDeathBuff") });;
	}

	bool has_untargetable_buff(game_object_script target)
	{
		return target->has_buff({ buff_hash("JaxCounterStrike"), buff_hash("ShenW") });;
	}
};

