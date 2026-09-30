/*
FUNCTION_NAME: Unity.Netcode.UnmanagedTypeSerializer<Vector3>$$Unity.Netcode.INetworkVariableSerializer<T>.Duplicate
ENTRY_POINT: 0632a2c4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_UnmanagedTypeSerializer<Vector3>__Unity_Netcode_INetworkVariableSerializer<T>_Duplicate
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined8 param_4,
               long param_5,long param_6,undefined8 param_7,byte param_8,undefined8 param_9)

{
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar1;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000058;
  byte bStack0000000000000064;
  undefined8 uStack0000000000000068;
  
  bStack0000000000000064 = param_8 & 1;
  uStack0000000000000058 = param_9;
  uStack0000000000000068 = param_7;
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f9cf0);
    *(undefined1 *)(unaff_x23 + 0x799) = 1;
  }
  in_stack_00000010 = &stack0x00000048;
  in_stack_00000018 = (undefined1 *)&stack0x00000068;
  in_stack_00000020 = &stack0x00000050;
  in_stack_00000008 = 0;
  in_stack_00000028 = &stack0x00000064;
  in_stack_00000030 = &stack0x00000040;
  in_stack_00000038 = (undefined1 *)&stack0x00000058;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000040 = 0;
  if (param_5 == 0) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (**(code **)(param_6 + 0x18))
              (*(undefined8 *)(param_6 + 0x40),param_4,*(undefined8 *)(param_6 + 0x28));
  }
  else {
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar1 = (**(code **)(param_5 + 0x18))
                      (*(undefined8 *)(param_5 + 0x40),param_4,*(undefined8 *)(param_5 + 0x28));
    in_stack_00000040 = CONCAT44(param_3,uVar1);
  }
  FUN_038cc0d8(&stack0x00000008);
  return;
}


