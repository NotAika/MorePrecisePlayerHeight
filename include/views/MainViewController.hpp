#pragma once

#include "main.hpp"

DECLARE_CLASS_CODEGEN(MorePrecisePlayerHeight::Views, MainViewController, HMUI::ViewController,
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
)