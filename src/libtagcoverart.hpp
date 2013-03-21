/*
  Copyright (C) 2011 Birunthan Mohanathas (www.poiru.net)

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef __COVER_H__
#define __COVER_H__

#ifndef TAGCOVERART_IMPLEMENTATION
// TagLib
#include "fileref.h"
#include "apefile.h"
#include "apetag.h"
#include "asffile.h"
#include "attachedpictureframe.h"
#include "commentsframe.h"
#include "flacfile.h"
#include "id3v1genres.h"
#include "id3v2tag.h"
#include "mpcfile.h"
#include "mp4file.h"
#include "mpegfile.h"
#include "tag.h"
#include "taglib.h"
#include "textidentificationframe.h"
#include "tstring.h"
#include "vorbisfile.h"
#include "wavpackfile.h"

#include <elementals/types.h>

class CCover
{
public:
	bool GetLocal(std::string filename, const std::string& folder, std::string& target);
	bool GetEmbedded(const TagLib::FileRef& fr, const std::string& target);
	
	bool GetComposer(TagLib::FileRef &fr, std::string &composer);
	bool SetComposer(TagLib::FileRef &fr, const std::string &composer);
	

private:
	bool ExtractAPE(TagLib::APE::Tag* tag, const std::string& target);
	bool ExtractID3(TagLib::ID3v2::Tag* tag, const std::string& target);
	bool ExtractASF(TagLib::ASF::File* file, const std::string& target);
	bool ExtractFLAC(TagLib::FLAC::File* file, const std::string& target);
	bool ExtractMP4(TagLib::MP4::File* file, const std::string& target);
	bool WriteCover(const TagLib::ByteVector& data, const std::string& target);
	
	bool xiph_get_field(TagLib::Ogg::XiphComment* xiph, const char * field,std::string &value);
	bool id3v2_get_field(TagLib::ID3v2::Tag *id3v2, const char * field, std::string & value);
	bool mp4_get_field(TagLib::MP4::Tag* mp4, const char * field,std::string & value);
	
};

extern "C" {
  
#endif

typedef void* ccover_t;
ccover_t ccover_new(void);
el_bool ccover_get_local(ccover_t c,const char* filename, const char* folder, const char* target);
el_bool ccover_get_embedded(ccover_t c, const char* filename, const char* target);
el_bool ccover_get_composer(ccover_t c, const char* filename, char** composer);
el_bool ccover_set_composer(ccover_t c, const char* filename, const char* composer);
void ccover_destroy(ccover_t c);

#ifndef TAGCOVERART_IMPLEMENTATION
};
#endif

#endif