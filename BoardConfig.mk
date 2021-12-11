#
# Copyright (C) 2020 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

BUILD_BROKEN_DUP_RULES := true

# Inherit common board flags
-include device/samsung/sm8250-common/BoardConfigCommon.mk

DEVICE_PATH := device/samsung/r8q

# APEX
DEXPREOPT_GENERATE_APEX_IMAGE := true

# Bluetooth
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(DEVICE_PATH)/bluetooth/include

# HIDL
DEVICE_MANIFEST_FILE += $(DEVICE_PATH)/manifest.xml

# INIT
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):init_samsung_r8q
TARGET_RECOVERY_DEVICE_MODULES := init_samsung_r8q

# Kernel
TARGET_KERNEL_CONFIG := vendor/lineage_r8q_defconfig

# Keystore
TARGET_KEYMASTER_VARIANT := samsung

# Partitions
ifneq ($(WITH_GMS),true)
BOARD_PRODUCTIMAGE_PARTITION_RESERVED_SIZE := 1258291200
BOARD_SYSTEMIMAGE_PARTITION_RESERVED_SIZE := 1258291200
endif

BOARD_SAMSUNG_DYNAMIC_PARTITIONS_SIZE := 9421455360
BOARD_SUPER_PARTITION_SIZE := 10292822016

# Platform
TARGET_SPECIFIC_HEADER_PATH += $(DEVICE_PATH)/include

# Recovery
TARGET_RECOVERY_DENSITY := xxhdpi
TARGET_RECOVERY_FSTAB := $(DEVICE_PATH)/rootdir/etc/fstab.qcom

# Inherit from proprietary vendor
-include vendor/samsung/r8q/BoardConfigVendor.mk
