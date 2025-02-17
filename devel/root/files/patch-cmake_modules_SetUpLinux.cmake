--- cmake/modules/SetUpLinux.cmake.orig	2023-02-13 15:21:06 UTC
+++ cmake/modules/SetUpLinux.cmake
@@ -6,7 +6,7 @@
 
 set(ROOT_PLATFORM linux)
 
-if(CMAKE_SYSTEM_PROCESSOR MATCHES x86_64)
+if(CMAKE_SYSTEM_PROCESSOR MATCHES x86_64 OR CMAKE_SYSTEM_PROCESSOR MATCHES amd64)
   if(CMAKE_CXX_COMPILER_ID STREQUAL Intel)
     set(ROOT_ARCHITECTURE linuxx8664icc)
   else()
@@ -23,7 +23,7 @@ elseif(CMAKE_SYSTEM_PROCESSOR MATCHES aarch64)
   set(ROOT_ARCHITECTURE linuxarm64)
 elseif(CMAKE_SYSTEM_PROCESSOR MATCHES arm)
   set(ROOT_ARCHITECTURE linuxarm)
-elseif(CMAKE_SYSTEM_PROCESSOR MATCHES ppc64)
+elseif(CMAKE_SYSTEM_PROCESSOR MATCHES ppc64 OR CMAKE_SYSTEM_PROCESSOR MATCHES powerpc64)
   set(ROOT_ARCHITECTURE linuxppc64gcc)
 elseif(CMAKE_SYSTEM_PROCESSOR MATCHES s390x)
   set(ROOT_ARCHITECTURE linuxs390xgcc)
@@ -103,6 +103,10 @@ elseif(CMAKE_CXX_COMPILER_ID STREQUAL Clang)
   endif()
 
   set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")
+
+  if(CMAKE_SYSTEM_NAME MATCHES FreeBSD)
+    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -lexecinfo -lcrypt")
+  endif()
 
   if(asan)
     # See also core/sanitizer/README.md for what's happening.
