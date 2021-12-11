// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2020 The LineageOS Project

#ifndef SAMSUNG_FINGERPRINT_INSCREEN_H
#define SAMSUNG_FINGERPRINT_INSCREEN_H

#define FOD_SENSOR_X 605
#define FOD_SENSOR_Y 2520
#define FOD_SENSOR_SIZE 210

#define FOD_ENABLE "fod_enable,1,1,0"
#define FOD_DISABLE "fod_enable,0"
#define FOD_MASK "319"

#define FOD_SET_RECT "set_fod_rect,605,2520,830,2740"

#define FINGERPRINT_ACQUIRED_VENDOR 6
#define VENDORCODE_FINGER_DOWN 10002
#define VENDORCODE_FINGER_UP 10001
#define SEM_FINGER_STATE 22
#define SEM_PARAM_PRESSED 2
#define SEM_PARAM_RELEASED 1

#define TSP_CMD_PATH "/sys/class/sec/tsp/cmd"
#define FP_GREEN_CIRCLE "/sys/class/lcd/panel/fp_green_circle"
#define MASK_BRIGHTNESS_PATH "/sys/class/lcd/panel/mask_brightness"
#define FOD_DIMMING_PATH "/sys/class/lcd/panel/fod_dimming"

#define SEM_AOSP_FQNAME "android.hardware.biometrics.fingerprint@2.1::IBiometricsFingerprint"

#endif  // SAMSUNG_FINGERPRINT_INSCREEN_H
