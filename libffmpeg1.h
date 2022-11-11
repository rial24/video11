#ifndef LIBFFMPEG_H
#define LIBFFMPEG_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <math.h>
#include <string.h>


extern "C"
{
    #include "libavcodec/avcodec.h"
    #include "libavcodec/avfft.h"

    #include "libavdevice/avdevice.h"

    #include "libavfilter/avfilter.h"
    #include "libavfilter/avfiltergraph.h"
    #include "libavfilter/buffersink.h"
    #include "libavfilter/buffersrc.h"

    #include "libavformat/avformat.h"
    #include "libavformat/avio.h"

    // libav resample

    #include "libavutil/opt.h"
    #include "libavutil/common.h"
    #include "libavutil/channel_layout.h"
    #include "libavutil/imgutils.h"
    #include "libavutil/mathematics.h"
    #include "libavutil/samplefmt.h"
    #include "libavutil/time.h"
    #include "libavutil/opt.h"
    #include "libavutil/pixdesc.h"
    #include "libavutil/file.h"

    // lib swresample

    #include "libswscale/swscale.h"

}


