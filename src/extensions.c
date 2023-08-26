#include "extensions.h"

void set_streamfile_stream_index(STREAMFILE* sf, int stream_index) {
	sf->stream_index = stream_index;
}

int get_vgmstream_num_streams(VGMSTREAM* vgmstream) {
	return vgmstream->num_streams;
}

int get_vgmstream_loop_flag(VGMSTREAM* vgmstream) {
	return vgmstream->loop_flag;
}