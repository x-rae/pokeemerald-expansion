RustboroCity_Gym_2_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RustboroCity_Gym_2_OnResume
	.byte 0

RustboroCity_Gym_2_OnResume::
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

