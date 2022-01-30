#ifndef LIBTEST_GLOBAL_H
#define LIBTEST_GLOBAL_H

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define LIBTEST_DECL_EXPORT __declspec(dllexport)
#  define LIBTEST_DECL_IMPORT __declspec(dllimport)
#else
#  define LIBTEST_DECL_EXPORT     __attribute__((visibility("default")))
#  define LIBTEST_DECL_IMPORT     __attribute__((visibility("default")))
#endif

#if defined(LIBTEST_LIBRARY)
#  define LIBTEST_EXPORT LIBTEST_DECL_EXPORT
#else
#  define LIBTEST_EXPORT LIBTEST_DECL_IMPORT
#endif

#endif // LIBTEST_GLOBAL_H
