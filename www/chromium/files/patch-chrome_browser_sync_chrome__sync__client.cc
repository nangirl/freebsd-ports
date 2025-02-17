--- chrome/browser/sync/chrome_sync_client.cc.orig	2023-02-08 09:03:45 UTC
+++ chrome/browser/sync/chrome_sync_client.cc
@@ -127,7 +127,7 @@
 #endif  // BUILDFLAG(IS_ANDROID)
 
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/ui/tabs/saved_tab_groups/saved_tab_group_keyed_service.h"
 #include "chrome/browser/ui/tabs/saved_tab_groups/saved_tab_group_service_factory.h"
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) ||
@@ -448,7 +448,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
 #endif  // !BUILDFLAG(IS_ANDROID)
 
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
     if (features::kTabGroupsSaveSyncIntegration.Get()) {
       controllers.push_back(std::make_unique<syncer::ModelTypeController>(
           syncer::SAVED_TAB_GROUP,
@@ -461,7 +461,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
 
 // Chrome prefers OS provided spell checkers where they exist. So only sync the
 // custom dictionary on platforms that typically don't provide one.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
     // Dictionary sync is enabled by default.
     if (GetPrefService()->GetBoolean(spellcheck::prefs::kSpellCheckEnable)) {
       controllers.push_back(
@@ -627,7 +627,7 @@ ChromeSyncClient::GetControllerDelegateForModelType(sy
           ->GetControllerDelegate();
     }
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
     case syncer::SAVED_TAB_GROUP: {
       DCHECK(features::kTabGroupsSaveSyncIntegration.Get());
       return SavedTabGroupServiceFactory::GetForProfile(profile_)
