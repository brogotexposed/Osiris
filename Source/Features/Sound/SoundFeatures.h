#pragma once

#include "BombBeepVisualizer.h"
#include "BombPlantVisualizer.h"
#include "FootstepVisualizer.h"
#include <Helpers/HudProvider.h>
#include <Hooks/ViewRenderHook.h>

struct SoundFeatures {
    SoundFeatures(ViewRenderHook& viewRenderHook, SoundWatcher& soundWatcher) noexcept
        : footstepVisualizer{ viewRenderHook, soundWatcher }
        , bombPlantVisualizer{ viewRenderHook, soundWatcher }
        , bombBeepVisualizer{ viewRenderHook, soundWatcher }
    {
    }
    
    FootstepVisualizer footstepVisualizer;
    BombPlantVisualizer bombPlantVisualizer;
    BombBeepVisualizer bombBeepVisualizer;
};