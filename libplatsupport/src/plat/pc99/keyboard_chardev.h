/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#pragma once

#include "../../chardev.h"
#include "keyboard_ps2.h"
#include "keyboard_vkey.h"

int
keyboard_cdev_init(const struct dev_defn* defn, const ps_io_ops_t* ops, ps_chardevice_t* dev);

