/**
 * Copyright (c) 2010 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef __AD5820_H__
#define __AD5820_H__

#include <linux/ioctl.h>  /* For IOCTL macros */

//#define AD5820_IOCTL_SET_POSITION  _IOW('o', 1, __u16)

#define AD5820_IOCTL_GET_CONFIG   _IOR('o', 1, struct ad5820_config)
#define AD5820_IOCTL_SET_POSITION _IOW('o', 2, u32)

struct ad5820_config {
       __u32 settle_time;
       __u32 actuator_range;
       __u32 pos_low;
       __u32 pos_high;
       float focal_length;
       float fnumber;
       float max_aperture;
};

#endif  /* __AD5820_H__ */

