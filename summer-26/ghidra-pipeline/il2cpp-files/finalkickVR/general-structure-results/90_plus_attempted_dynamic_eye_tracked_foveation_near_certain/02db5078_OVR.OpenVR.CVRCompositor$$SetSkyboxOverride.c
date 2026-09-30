/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$SetSkyboxOverride
ENTRY_POINT: 02db5078
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVR_OpenVR_CVRCompositor__SetSkyboxOverride(byte param_1)

{
  long unaff_x29;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  
  bStack0000000000000027 = param_1 & 1;
  if (bStack0000000000000027 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    OVRP_1_78_0_ovrp_GetFoveationEyeTrackedSupported_mAE52E1EFDCD73DB3D0AC0C561D6A26D24C952F25
              (unaff_x29 + -0x14,0);
    *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


