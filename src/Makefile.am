## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(LIBTAGCOVERART_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

lib_LTLIBRARIES = libtagcoverart.la


libtagcoverart_la_SOURCES = \
	libtagcoverart.c \
	tagcoverart.cpp 

libtagcoverart_la_LDFLAGS = 

libtagcoverart_la_LIBADD = $(LIBTAGCOVERART_LIBS)

include_HEADERS = \
	libtagcoverart.h \
	libtagcoverart.hpp

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libtagcoverart.pc

EXTRA_DIST = \
	libtagcoverart.pc.in
