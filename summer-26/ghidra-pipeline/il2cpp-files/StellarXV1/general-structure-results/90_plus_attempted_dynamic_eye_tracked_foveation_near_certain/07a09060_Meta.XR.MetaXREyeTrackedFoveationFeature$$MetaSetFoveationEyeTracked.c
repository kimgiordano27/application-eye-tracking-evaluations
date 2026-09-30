/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 07a09060
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(long param_1)

{
  long unaff_x19;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(unaff_x19 + 0x2c) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(unaff_x19 + 0x34) = uVar1;
  thunk_FUN_089c6ea4();
  return;
}


