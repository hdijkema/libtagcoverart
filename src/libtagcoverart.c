#include "libtagcoverart.h"
#define TAGCOVERART_IMPLEMENTATION
#include "libtagcoverart.hpp"
#include <elementals.h>

#ifdef __cplusplus
extern "C" {
#endif


tag_cover_art_t* tag_cover_art_new(const char* media_file)
{
  tag_cover_art_t* tag = (tag_cover_art_t*) mc_malloc(sizeof(tag_cover_art_t));
  tag->ccover = ccover_new();
  tag->media_file = mc_strdup(media_file);
  return tag;
}

el_bool tag_cover_art_extract(tag_cover_art_t* tag, const char* target_file)
{
  return ccover_get_embedded(tag->ccover, tag->media_file, target_file);
}

void tag_cover_art_destroy(tag_cover_art_t* tag)
{
  ccover_destroy(tag->ccover);
  mc_free(tag->media_file);
  mc_free(tag);
}

#ifdef __cplusplus
}
#endif
