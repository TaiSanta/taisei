/*
 * This software is licensed under the terms of the MIT-License
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2017, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2017, Andrei Alexeyev <akari@alienslab.net>.
 */

#pragma once
#include "taisei.h"

#include "objectpool.h"

typedef struct StageObjectPools {
    union {
        struct {
            ObjectPool *projectiles;    // includes particles as well
            ObjectPool *items;
            ObjectPool *enemies;
            ObjectPool *lasers;
            ObjectPool *aniplayers;     // hack for the boss glow effect
        };

        ObjectPool *first;
    };
} StageObjectPools;

extern StageObjectPools stage_object_pools;

void stage_objpools_alloc(void);
void stage_objpools_free(void);
