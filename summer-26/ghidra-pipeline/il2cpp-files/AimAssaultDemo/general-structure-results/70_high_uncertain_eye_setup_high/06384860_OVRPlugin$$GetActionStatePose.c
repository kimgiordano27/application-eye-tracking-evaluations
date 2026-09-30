/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 06384860
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


undefined8 OVRPlugin__GetActionStatePose(int param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_07d96678;
  if ((DAT_0825c556 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d96678);
    DAT_0825c556 = 1;
  }
  uVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_0638a738(uVar2,(long)param_1,0);
  return uVar2;
}


