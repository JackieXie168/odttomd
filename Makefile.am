# AUTOMAKE_OPTIONS= foreign
## Source directory
#SUBDIRS= include utf8

noinst_PROGRAMS = odt2md

#odt2md_PROGRAMS = odt2md
odt2md_SOURCES = content.cc expat_utils.cc numbering.cc options.cc structure.cc styles.cc util.cc writer_collecting.cc writer_output.cc xmlInZip.cc

#AM_CFLAGS = -I$(top_srcdir) -I$(top_srcdir)/nvram/include
AM_CFLAGS = $(BOOST_CPPFLAGS) -I$(top_srcdir) -I/usr/include/c++/4.2.1 -I/usr/include/c++/4.2.1/tr1 -I/opt/local/include/ #-I/opt/local/include/boost/
EXPAT_LIBS=-L/opt/local/lib -lexpat
ZIP_LIBS=-L/opt/local/lib -lzip
AM_LDFLAGS = $(EXPAT_LIBS)  $(ZIP_LIBS)

AM_CXXFLAGS = -DCMAKE_CXX_COMPILER=clang++  $(BOOST_CPPFLAGS) -I$(top_srcdir)  -I/opt/local/include/gcc45/c++/ -I/opt/local/include/gcc45/c++/tr1/ -I/usr/include/c++/4.2.1 -I/usr/include/c++/4.2.1/tr1 -I/opt/local/include/ -I/opt/local/include/boost/ #-std=c++11

#ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = $(BOOST_CPPFLAGS) $(CXXFLAGS)
AM_LDFLAGS += $(LDFLAGS_BOOST) \
    $(LDFLAGS_BOOST_LIBS)
LIBS += $(LIBS_BOOST)

ACLOCAL_AMFLAGS = -I  m4

LDFLAGS_BOOST = \
    $(BOOST_SYSTEM_LDFLAGS) \
    $(BOOST_PROGRAM_OPTIONS_LDFLAGS)

LIBS_BOOST = \
    $(BOOST_SYSTEM_LIBS) \
    $(BOOST_PROGRAM_OPTIONS_LIBS) \
    $(BOOST_FILESYSTEM_LIBS)


#odt2md_LDADD = $(top_srcdir)/nvram/libnvram-1.0.la $(top_srcdir)/xutils/libxutils-1.0.la
odt2md_LDADD = $(AM_LDFLAGS) $(BOOST_SYSTEM_LIB) $(BOOST_THREAD_LIB) $(BOOST_DATE_TIME_LIB) 


CLEANFILES = *~ *.log

