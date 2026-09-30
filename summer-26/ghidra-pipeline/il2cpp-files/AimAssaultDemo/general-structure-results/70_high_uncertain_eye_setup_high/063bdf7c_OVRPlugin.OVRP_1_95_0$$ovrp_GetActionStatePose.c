/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 063bdf7c
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


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_07db76a0;
  puVar1 = PTR_DAT_07db7698;
  if (*(int *)(**(long **)(param_1 + 0x680) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_063be020();
  uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_0529852c(uVar4,uVar3,*(undefined8 *)puVar1);
  return uVar4;
}


