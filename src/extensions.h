/*
 * extensions.h - additional definitions for VGMSTREAM
 */
#ifndef _EXTENSIONS_H
#define _EXTENSIONS_H

#ifdef _WINDLL
#define DECLSPEC __declspec(dllexport)
#define STDCALL __stdcall
#else
#define DECLSPEC
#define STDCALL
#endif

#include "vgmstream.h"

DECLSPEC void STDCALL set_streamfile_stream_index(STREAMFILE* sf, int stream_index);

DECLSPEC int STDCALL get_vgmstream_num_streams(VGMSTREAM* vgmstream);

DECLSPEC int STDCALL get_vgmstream_loop_flag(VGMSTREAM* vgmstream);

#endif /* _EXTENSIONS_H */
