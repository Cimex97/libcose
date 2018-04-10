/*
 * Copyright (C) 2018 Freie Universitat Berlin
 * Copyright (C) 2018 Inria
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#include <stdint.h>
#include <stdlib.h>

void randombytes(uint8_t *target, uint64_t n)
{
    for(uint64_t i = 0; i < n; i++) {
        target[i] = rand() % 256;
    }
}
