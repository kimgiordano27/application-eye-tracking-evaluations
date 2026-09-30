/*
FUNCTION_NAME: OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D
ENTRY_POINT: 02d8d978
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__0__
              );
    OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D::
    s_Il2CppMethodInitialized = 1;
  }
  if ((param_2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__0__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__2__
               ,0);
  }
  return;
}


