/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 02bebaa4
PROGRAM: sharks-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked
               (ulong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long unaff_x20;
  long *plVar2;
  long unaff_x21;
  
  plVar2 = *(long **)(unaff_x20 + 0xdf8);
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3df8);
    *(undefined1 *)(unaff_x21 + 0xd06) = 1;
  }
  uVar1 = *param_2;
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4d7b0(uVar1,0);
  return;
}


