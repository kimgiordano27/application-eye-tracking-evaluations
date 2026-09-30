/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 027e8514
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_position(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_03cc4b20;
  local_38 = param_3;
  local_28 = param_2;
  if ((DAT_041250e9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    DAT_041250e9 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  dVar4 = (double)FUN_02784978(&local_28,0);
  dVar5 = (double)FUN_02784978(&local_38,0);
  lVar1 = -0x8000000000000000;
  if (dVar4 != INFINITY) {
    lVar1 = (long)dVar4;
  }
  lVar2 = -0x8000000000000000;
  if (dVar5 != INFINITY) {
    lVar2 = (long)dVar5;
  }
  FUN_027e832c(param_1,lVar1,lVar2,0);
  return 1;
}


