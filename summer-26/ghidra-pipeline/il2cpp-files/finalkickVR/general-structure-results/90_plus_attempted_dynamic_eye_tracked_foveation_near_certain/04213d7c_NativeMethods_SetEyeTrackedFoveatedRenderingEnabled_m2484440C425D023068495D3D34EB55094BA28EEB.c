/*
FUNCTION_NAME: NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
ENTRY_POINT: 04213d7c
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


void NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
               (byte param_1)

{
  byte bVar1;
  
  if ((NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RuntimePlatformChecks_t29F66D6213B974B9075CBB2F47CBAFADECD92F33_il2cpp_TypeInfo_var_048d38c8
              );
    NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_RuntimePlatformChecks_t29F66D6213B974B9075CBB2F47CBAFADECD92F33_il2cpp_TypeInfo_var_048d38c8
            );
  bVar1 = RuntimePlatformChecks_IsSupportedPlatform_mF18A0D2301ADD4EB402425FD5BC590DF8749E41A(0);
  if ((bVar1 & 1) != 0) {
    Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89
              (param_1 & 1,0);
  }
  return;
}


