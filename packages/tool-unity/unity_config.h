#ifndef UNITY_CONFIG_H
#define UNITY_CONFIG_H

#include "output_export.h"

#ifdef __cplusplus
extern "C"
{
#endif


#define UNITY_OUTPUT_CHAR(a)    output_char(a)
#define UNITY_OUTPUT_FLUSH()    output_flush()
#define UNITY_OUTPUT_START()    output_start(9600)
#define UNITY_OUTPUT_COMPLETE() output_complete()


#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* UNITY_CONFIG_H */
