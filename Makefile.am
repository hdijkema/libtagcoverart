## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

libtagcoverartdocdir = ${prefix}/doc/libtagcoverart
libtagcoverartdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(libtagcoverartdoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(libtagcoverartdocdir)
