/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 051b9b38
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__get_foveatedRenderingSupported
          (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong *unaff_x19;
  long *unaff_x23;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  ulong uVar4;
  float in_s16;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 in_stack_000000a8;
  
  uStack0000000000000028 = 0;
  fVar3 = **(float **)(param_1 + 0xb8) * 8.0;
  if (param_8 <= fVar3) {
    param_8 = fVar3;
  }
  if (param_8 <= ABS(in_s16 - unaff_s8)) {
    in_s16 = unaff_s9 / unaff_s8;
  }
  uStack0000000000000020 = 0;
  FUN_051b9e20(param_2 + param_5 * in_s16,param_3 + param_6 * in_s16,param_4 + in_s16 * param_7);
  uVar2 = uStack0000000000000028;
  uVar4 = uStack0000000000000020 & 0xffffffff;
  uVar1 = uStack0000000000000020._4_4_;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05effcac(uVar4,uVar1,uVar2,&stack0x00000040,0);
  FUN_051b9c70();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


