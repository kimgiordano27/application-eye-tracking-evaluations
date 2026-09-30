/*
FUNCTION_NAME: NativeMethods_GetEyeTrackedFoveatedRenderingSupported_m7017B3CE2D6DE03700864069DECC810199A2C9E0
ENTRY_POINT: 04214348
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_6;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte NativeMethods_GetEyeTrackedFoveatedRenderingSupported_m7017B3CE2D6DE03700864069DECC810199A2C9E0
               (void)

{
  byte bVar1;
  byte local_11;
  
  if ((NativeMethods_GetEyeTrackedFoveatedRenderingSupported_m7017B3CE2D6DE03700864069DECC810199A2C9E0
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RuntimePlatformChecks_t29F66D6213B974B9075CBB2F47CBAFADECD92F33_il2cpp_TypeInfo_var_048d38c8
              );
    NativeMethods_GetEyeTrackedFoveatedRenderingSupported_m7017B3CE2D6DE03700864069DECC810199A2C9E0
    ::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_RuntimePlatformChecks_t29F66D6213B974B9075CBB2F47CBAFADECD92F33_il2cpp_TypeInfo_var_048d38c8
            );
  bVar1 = RuntimePlatformChecks_IsSupportedPlatform_mF18A0D2301ADD4EB402425FD5BC590DF8749E41A(0);
  if ((bVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_11 = Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5
                         (0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


