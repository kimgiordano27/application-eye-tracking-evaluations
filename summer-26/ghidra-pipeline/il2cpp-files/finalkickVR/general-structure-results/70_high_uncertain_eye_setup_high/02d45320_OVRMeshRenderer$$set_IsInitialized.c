/*
FUNCTION_NAME: OVRMeshRenderer$$set_IsInitialized
ENTRY_POINT: 02d45320
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVRMeshRenderer__set_IsInitialized(undefined8 *param_1)

{
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  bStack000000000000000f = OVRPlugin_StartFaceTracking_m4340F36CE2BB063949A1EEDD585720ADF72EEEBA(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__,
               0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


