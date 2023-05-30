package com.ddl.example.demo.services;

public class HelloWorldJNI {

    static {
        System.load("C:\\Users\\Ljubica\\Desktop\\duobango\\demo\\target\\classes\\native.dll");
    }

    public static void main() {
        new HelloWorldJNI().sayHello();
    }

    // Declare a native method sayHello() that receives no arguments and returns void
    private native void sayHello();
}