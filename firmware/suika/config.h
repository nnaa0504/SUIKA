// Copyright 2023 nnaa0504 (@nnaa0504)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x7757
#define DEVICE_VER   0x7755
#define MANUFACTURER nana
#define PRODUCT      SUIKA

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP19
#define SPI_MOSI_PIN GP18

#define ENCODERS_PAD_A { GP21 }
#define ENCODERS_PAD_B { GP22 }
#define ENCODER_RESOLUTION 4

#define DEBOUNCE 50

#define QUANTUM_PAINTER_SUPPORTS_256_PALETTE TRUE
#define QUANTUM_PAINTER_LOAD_FONTS_TO_RAM TRUE
#define QUANTUM_PAINTER_PIXDATA_BUFFER_SIZE 128
#define QUANTUM_PAINTER_LVGL_USE_CUSTOM_CONF
