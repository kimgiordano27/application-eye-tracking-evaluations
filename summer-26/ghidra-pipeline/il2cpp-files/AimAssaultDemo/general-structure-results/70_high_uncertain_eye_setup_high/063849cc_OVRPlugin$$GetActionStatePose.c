/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 063849cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d96678);
    FUN_0373b518(PTR_DAT_07db61f8);
    *(undefined1 *)(unaff_x23 + 0x559) = 1;
  }
  uVar1 = thunk_FUN_037784fc(*unaff_x22);
  uVar2 = thunk_FUN_037788cc(*unaff_x21);
  FUN_0638c054(uVar2,uVar1,0);
  return uVar2;
}


