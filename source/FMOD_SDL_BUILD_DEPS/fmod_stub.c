// Very simple stub for all the symbols we need for FMOD_SDL from the libfmod.so library.
// libfmod.so is propietary, thus we avoid shipping it as much as possible.
// This should be updated accordingly if FMOD_SDL ever references any more symbols from libfmod.so

#include "fmod.h"

FMOD_RESULT F_API FMOD_System_RegisterOutput(FMOD_SYSTEM *system, const FMOD_OUTPUT_DESCRIPTION *description, unsigned int *handle) {
	return FMOD_OK;
}

FMOD_RESULT F_API FMOD_System_SetOutputByPlugin(FMOD_SYSTEM *system, unsigned int handle) {
	return FMOD_OK;
}

