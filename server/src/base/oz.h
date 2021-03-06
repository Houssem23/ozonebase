#ifndef OZ_H
#define OZ_H

extern "C"
{
#include "../libgen/libgenDebug.h"
}

#include "ozConfig.h"
#include <stdint.h>
#include <assert.h>

#define AVCODEC_MAX_AUDIO_FRAME_SIZE 192000

extern "C"
{
#if !HAVE_DECL_ROUND
double round(double);
#endif
}

#endif // OZ_H
