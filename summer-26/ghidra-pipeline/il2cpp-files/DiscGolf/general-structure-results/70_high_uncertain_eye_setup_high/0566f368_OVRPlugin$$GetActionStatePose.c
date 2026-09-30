/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0566f368
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(undefined8 *param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _in_stack_00000010 = (*(code *)*param_1)();
  uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0564da1c(uVar1,&stack0x00000010,0);
  return;
}


