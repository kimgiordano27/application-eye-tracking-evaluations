/*
FUNCTION_NAME: OVREyeGaze_get_EyeTrackingEnabled_mAE4BECAD39F42E326C968CEF54CADF23518AD270
ENTRY_POINT: 02d43f44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


byte OVREyeGaze_get_EyeTrackingEnabled_mAE4BECAD39F42E326C968CEF54CADF23518AD270(void)

{
  byte bVar1;
  
  if ((OVREyeGaze_get_EyeTrackingEnabled_mAE4BECAD39F42E326C968CEF54CADF23518AD270::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVREyeGaze_get_EyeTrackingEnabled_mAE4BECAD39F42E326C968CEF54CADF23518AD270::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_eyeTrackingEnabled_m4113F7D70FA5D3327AE8DC4C90D6FB3AA0C48DFE(0);
  return bVar1 & 1;
}


