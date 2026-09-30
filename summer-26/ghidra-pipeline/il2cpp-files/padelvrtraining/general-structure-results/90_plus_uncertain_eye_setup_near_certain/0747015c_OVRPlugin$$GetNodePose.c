/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 0747015c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetNodePose
          (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong *unaff_x19;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  ulong uVar6;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 in_stack_000000a8;
  
  fVar4 = ABS(unaff_s8);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  uStack0000000000000028 = 0;
  fVar5 = **(float **)(**(long **)(param_1 + 0xee8) + 0xb8) * 8.0;
  fVar3 = fVar4 * param_8;
  if (fVar4 * param_8 <= fVar5) {
    fVar3 = fVar5;
  }
  fVar4 = 0.0;
  if (fVar3 <= ABS(0.0 - unaff_s8)) {
    fVar4 = unaff_s9 / unaff_s8;
  }
  uStack0000000000000020 = 0;
  FUN_0747045c(param_2 + param_5 * fVar4,param_3 + param_6 * fVar4,param_4 + fVar4 * param_7);
  uVar2 = uStack0000000000000028;
  uVar6 = uStack0000000000000020 & 0xffffffff;
  uVar1 = uStack0000000000000020._4_4_;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a5b7d0(uVar6,uVar1,uVar2,&stack0x00000040,0);
  FUN_074702ac();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


