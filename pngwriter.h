#ifndef _pngwriter_h__
#define _pngwriter_h__

#include "gbphoto.h"

int gbphoto_gameface_writepng(const struct gb_ram_header *header, const char *filename, char * color_str);
int gbphoto_writepng(const struct gb_photo *photo, const char *filename, int small_photo, char * color_str);

#endif // _pngwriter_h__
