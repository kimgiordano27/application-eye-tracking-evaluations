/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d68f44
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined **ppuVar1;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_00fdc2e4(PTR_DAT_0234be48);
  FUN_00fdc2e4(PTR_DAT_0234cbe0);
  FUN_00fdc2e4(PTR_DAT_023587b0);
  FUN_00fdc2e4(PTR_DAT_023587b8);
  *(undefined1 *)(unaff_x21 + 0x722) = 1;
  ppuVar1 = &PTR_DAT_022333a0 + (int)unaff_w19;
  if (0x17 < unaff_w19) {
    ppuVar1 = (undefined **)(*unaff_x20 + 0xb8);
  }
  return *(undefined8 *)*ppuVar1;
}


