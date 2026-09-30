/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05fdac54
PROGRAM: vandalizer-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_ZR;
  undefined8 *unaff_x19;
  undefined4 uVar1;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)unaff_x19 = param_1;
  *(undefined4 *)((long)unaff_x19 + 4) = param_2;
  uVar1 = unaff_s11;
  if (!in_ZR) {
    uVar1 = unaff_s12;
  }
  if (unaff_s9 != unaff_s10) {
    unaff_s11 = unaff_s12;
  }
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 1) = param_3;
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar1;
  *(undefined4 *)(unaff_x19 + 2) = unaff_s11;
  *(undefined4 *)((long)unaff_x19 + 0x14) = unaff_s13;
  return;
}


