#include <jni.h>
/* Header for class bossacjni */

#ifndef _Included_bossacjni
#define _Included_bossacjni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bossacjni
 * Method:    bossac
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_org_udoo_bossacjni_BossacManager_BossacWriteImage
  (JNIEnv *, jobject, jstring, jboolean verify);

JNIEXPORT jint JNICALL Java_org_udoo_bossacjni_BossacManager_BossacReadImage
  (JNIEnv *, jobject, jstring, jlong sizeToRead);

#ifdef __cplusplus
}
#endif
#endif
