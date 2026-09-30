/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$ThrowArgumentError
ENTRY_POINT: 03a3bac0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__ThrowArgumentError
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x21;
  undefined8 *puVar2;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  param_1 = param_1 - param_5;
  puVar2 = (undefined8 *)(in_x9 + 0x20);
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    in_stack_00000030 = puVar2[2];
    in_stack_00000028 = puVar2[1];
    in_stack_00000020 = *puVar2;
    uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,&stack0x00000020);
    if ((uVar1 & 1) != 0) break;
    param_1 = param_1 + -1;
    puVar2 = puVar2 + 3;
    unaff_w19 = unaff_w19 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


