/*
FUNCTION_NAME: XRInputTrackingAggregator_GetEyeGazeStatus_m68780F555420042CB61C51BECF5F7F3D4EAFBC22
ENTRY_POINT: 041db794
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
XRInputTrackingAggregator_GetEyeGazeStatus_m68780F555420042CB61C51BECF5F7F3D4EAFBC22
          (undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  if ((XRInputTrackingAggregator_GetEyeGazeStatus_m68780F555420042CB61C51BECF5F7F3D4EAFBC22::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    XRInputTrackingAggregator_GetEyeGazeStatus_m68780F555420042CB61C51BECF5F7F3D4EAFBC22::
    s_Il2CppMethodInitialized = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
            );
  bVar1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(0);
  if ((bVar1 & 1) == 0) {
    il2cpp_codegen_initobj(&local_38,8);
    local_18 = local_38;
  }
  else {
    uVar2 = Characteristics_get_eyeGaze_m851098FE08AB2C2548FA2F9B3E9ED49F7F7BFD27();
    bVar1 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A
                      (uVar2,&local_30,0);
    if ((bVar1 & 1) == 0) {
      il2cpp_codegen_initobj(&local_38,8);
      local_18 = local_38;
    }
    else {
      local_18 = XRInputTrackingAggregator_GetTrackingStatus_mEBD616504B707CAA3A54622F570A87F8DC50DEFF
                           (local_30,uStack_28,0);
    }
  }
  return local_18;
}


