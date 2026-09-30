/*
FUNCTION_NAME: OVRManager_OnApplicationQuit_mFE6276AD538E13AF339753F5CD7C9D4E6623BB0F
ENTRY_POINT: 02d8da40
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_OnApplicationQuit_mFE6276AD538E13AF339753F5CD7C9D4E6623BB0F(void)

{
  if ((OVRManager_OnApplicationQuit_mFE6276AD538E13AF339753F5CD7C9D4E6623BB0F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__1__
              );
    OVRManager_OnApplicationQuit_mFE6276AD538E13AF339753F5CD7C9D4E6623BB0F::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
            (*(undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__1__
             ,0);
  return;
}


