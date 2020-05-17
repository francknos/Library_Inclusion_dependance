#ifndef DLIBSUB_GLOBAL_H
#define DLIBSUB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLIBSUB_LIBRARY)
#  define DLIBSUB_EXPORT Q_DECL_EXPORT
#else
#  define DLIBSUB_EXPORT Q_DECL_IMPORT
#endif

#endif // DLIBSUB_GLOBAL_H
