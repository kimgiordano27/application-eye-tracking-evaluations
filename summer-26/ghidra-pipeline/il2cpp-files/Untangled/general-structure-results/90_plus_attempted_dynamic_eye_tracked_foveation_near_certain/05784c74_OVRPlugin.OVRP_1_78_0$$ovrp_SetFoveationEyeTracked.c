/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 05784c74
PROGRAM: Untangled-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(undefined8 param_1)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar1;
  
  plVar1 = (long *)*unaff_x21;
  if ((*(byte *)(unaff_x20 + 0xa08) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
    *(undefined1 *)(unaff_x20 + 0xa08) = 1;
  }
  if (*(int *)(*plVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05784cbc(param_1);
  FUN_057754f8();
  return;
}


