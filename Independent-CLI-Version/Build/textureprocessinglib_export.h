
#ifndef TEXTUREPROCESSINGLIB_EXPORT_H
#define TEXTUREPROCESSINGLIB_EXPORT_H

#ifdef TEXTUREPROCESSINGLIB_STATIC_DEFINE
#  define TEXTUREPROCESSINGLIB_EXPORT
#  define TEXTUREPROCESSINGLIB_TEMPLATE_EXPORT
#  define TEXTUREPROCESSINGLIB_NO_EXPORT
#else
#  ifndef TEXTUREPROCESSINGLIB_EXPORT
#    ifdef TextureProcessingLib_EXPORTS
        /* We are building this library */
#      define TEXTUREPROCESSINGLIB_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define TEXTUREPROCESSINGLIB_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef TEXTUREPROCESSINGLIB_TEMPLATE_EXPORT
#    ifdef TextureProcessingLib_EXPORTS
        /* We are building this library */
#      define TEXTUREPROCESSINGLIB_TEMPLATE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define TEXTUREPROCESSINGLIB_TEMPLATE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef TEXTUREPROCESSINGLIB_NO_EXPORT
#    define TEXTUREPROCESSINGLIB_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef TEXTUREPROCESSINGLIB_DEPRECATED
#  define TEXTUREPROCESSINGLIB_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef TEXTUREPROCESSINGLIB_DEPRECATED_EXPORT
#  define TEXTUREPROCESSINGLIB_DEPRECATED_EXPORT TEXTUREPROCESSINGLIB_EXPORT TEXTUREPROCESSINGLIB_DEPRECATED
#endif

#ifndef TEXTUREPROCESSINGLIB_DEPRECATED_NO_EXPORT
#  define TEXTUREPROCESSINGLIB_DEPRECATED_NO_EXPORT TEXTUREPROCESSINGLIB_NO_EXPORT TEXTUREPROCESSINGLIB_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define TEXTUREPROCESSINGLIB_NO_DEPRECATED
#endif

#endif
