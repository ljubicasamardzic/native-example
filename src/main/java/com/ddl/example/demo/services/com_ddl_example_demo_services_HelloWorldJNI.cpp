#include <jni.h>
#include <stdio.h>
#include <iostream>
#include "com_ddl_example_demo_services_HelloWorldJNI.h"

JNIEXPORT void JNICALL Java_com_ddl_example_demo_services_HelloWorldJNI_sayHello
  (JNIEnv* env, jobject thisObject) {
    std::cout << "Hello from C++ !!" << std::endl;
}
