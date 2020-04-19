#ifndef PROJD_GLOBAL_H
#define PROJD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROJD_LIBRARY)
#  define PROJD_EXPORT Q_DECL_EXPORT
#else
#  define PROJD_EXPORT Q_DECL_IMPORT
#endif

#endif // PROJD_GLOBAL_H
