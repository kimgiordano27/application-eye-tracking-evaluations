/*
FUNCTION_NAME: OVRManager_OnApplicationPause_m28497314F1581EEC20923FDB0A946FBA5FF9D347
ENTRY_POINT: 02d8d8b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_OnApplicationPause_m28497314F1581EEC20923FDB0A946FBA5FF9D347
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRManager_OnApplicationPause_m28497314F1581EEC20923FDB0A946FBA5FF9D347::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__1__
              );
    OVRManager_OnApplicationPause_m28497314F1581EEC20923FDB0A946FBA5FF9D347::
    s_Il2CppMethodInitialized = 1;
  }
  if ((param_2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__1__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__0__
               ,0);
  }
  return;
}


