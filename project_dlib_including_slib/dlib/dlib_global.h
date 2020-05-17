#ifndef DLIB_GLOBAL_H
#define DLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLIB_LIBRARY)
#  define DLIB_EXPORT Q_DECL_EXPORT
#include "slibsub.h"
#else
#  define DLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // DLIB_GLOBAL_H
