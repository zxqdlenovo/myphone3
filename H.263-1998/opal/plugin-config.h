/* plugin-config.h.  Generated from plugin-config.h.in by configure.  */
#ifndef _PLUGIN_CONFIG_H_
#define _PLUGIN_CONFIG_H_

/* For the win32 build */
/* #undef PLUGIN_CODEC_DLL_EXPORTS */

/* Directory with libavcodec source code, for MPEG4 rate control correction */
/* #undef LIBAVCODEC_HAVE_SOURCE_DIR */

/* Directory of the libavcodec header files */
#define LIBAVCODEC_HEADER "libavcodec/avcodec.h"

/* Filename of the libavcodec library */
#define LIBAVCODEC_LIB_NAME "libavcodec.so.52"

/* Stack alignment hack for libavcodec library */
/* #undef LIBAVCODEC_STACKALIGN_HACK */

/* Assume full capabilities at empty fmtp lines */
#define DEFAULT_TO_FULL_CAPABILITIES 1

/* Filename of the libx264 library */
#define X264_LIB_NAME "libx264.so.88"

/* Statically link x264 to the plugin. Default for win32. */
/* #undef X264_LINK_STATIC */

#endif /* _PLUGIN_CONFIG_H_ */
