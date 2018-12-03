/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kaldijni_KaldiWrapper */

#ifndef _Included_kaldijni_KaldiWrapper
#define _Included_kaldijni_KaldiWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     kaldijni_KaldiWrapper
 * Method:    initialize
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_kaldijni_KaldiWrapper_initialize
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     kaldijni_KaldiWrapper
 * Method:    decode
 * Signature: (JLjava/lang/String;Ljava/lang/String;[FII)V
 */
JNIEXPORT void JNICALL Java_kaldijni_KaldiWrapper_decode
  (JNIEnv *, jobject, jlong, jstring, jstring, jfloatArray, jint, jint);

/*
 * Class:     kaldijni_KaldiWrapper
 * Method:    decodeWithFeatureFile
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_kaldijni_KaldiWrapper_decodeWithFeatureFile
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     kaldijni_KaldiWrapper
 * Method:    modelInfo
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_kaldijni_KaldiWrapper_modelInfo
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif