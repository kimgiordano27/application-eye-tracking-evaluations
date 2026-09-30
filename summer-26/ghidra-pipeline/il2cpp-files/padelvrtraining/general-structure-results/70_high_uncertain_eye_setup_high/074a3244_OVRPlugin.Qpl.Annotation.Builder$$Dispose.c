/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 074a3244
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(long param_1)

{
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x650));
  *(undefined1 *)(unaff_x21 + 0xbc1) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07156958(&stack0x00000018,0x7b2,1,1,0,0,0,0);
  in_stack_00000010 = FUN_07157b90((double)unaff_x19,&stack0x00000018,0);
  FUN_071584ec(&stack0x00000010,0);
  return;
}


