/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 0367db58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_01f51358();
  uVar1 = FUN_0367dba4(3,&stack0x00000008);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_01f51358();
  uVar1 = FUN_0367dba4(4,&stack0x00000008);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x40),uVar1);
  return;
}


