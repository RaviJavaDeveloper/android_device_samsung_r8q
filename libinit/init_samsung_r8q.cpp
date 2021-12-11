/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t r8q_info = {
    .hwc_value = "IN",
    .sku_value = "",

    .brand = "samsung",
    .device = "r8q",
    .marketname = "SM-G781B",
    .model = "SM-G781B",
    .build_fingerprint = "samsung/r8qxxx/r8q:11/RP1A.200720.012/G781BXXS4CUJ2:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    r8q_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
