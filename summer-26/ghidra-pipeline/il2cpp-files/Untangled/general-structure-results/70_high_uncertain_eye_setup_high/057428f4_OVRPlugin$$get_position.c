/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 057428f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long *plVar2;
  long unaff_x21;
  
  plVar2 = *(long **)(unaff_x20 + 0xb78);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37b78);
    *(undefined1 *)(unaff_x21 + 0x99a) = 1;
  }
  uVar1 = FUN_0569c484(0);
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*plVar2);
  }
  FUN_0573513c(param_2,uVar1);
  return;
}


