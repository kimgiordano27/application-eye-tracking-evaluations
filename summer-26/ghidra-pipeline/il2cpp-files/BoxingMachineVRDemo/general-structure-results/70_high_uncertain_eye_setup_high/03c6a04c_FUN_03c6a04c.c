/*
FUNCTION_NAME: FUN_03c6a04c
ENTRY_POINT: 03c6a04c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_03c6a04c(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[5];
  local_40 = param_2[4];
                    /* try { // try from 03c6a058 to 03d6a0b7 has its CatchHandler @ 03c6a1b4 */
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uVar1 = FUN_03627c58(*(undefined8 *)(param_1 + 0x10),&local_60,0,*(undefined4 *)(param_1 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                      0xd0) + 0x20) + 0xc0) + 0x150));
  if (-1 < (int)uVar1) {
    Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom(param_1,uVar1);
  }
  return ~uVar1 >> 0x1f;
}


