#pragma once

#include "robin_hood.h"

static const char* MapName = "robin_hood::flat_map";

template <class Key, class Val>
using Map = robin_hood::flat_map<Key, Val>;