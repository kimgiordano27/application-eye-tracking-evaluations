/*
FUNCTION_NAME: Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF
ENTRY_POINT: 04213cf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering
*/


void Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF(undefined8 param_1)

{
  byte bVar1;
  
  if ((Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__);
    Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                    (param_1,*(undefined8 *)
                              Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__,0);
  if ((bVar1 & 1) != 0) {
    NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
              (1,0);
  }
  return;
}


