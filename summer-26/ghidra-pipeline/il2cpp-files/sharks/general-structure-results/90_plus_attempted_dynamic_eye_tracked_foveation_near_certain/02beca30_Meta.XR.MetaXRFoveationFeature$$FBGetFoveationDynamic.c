/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 02beca30
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xdf8));
  *(undefined1 *)(unaff_x21 + 0xd22) = 1;
  uVar1 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4e974(uVar1,0);
  return;
}


