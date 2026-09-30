/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 0325ba4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


bool Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_02d965b8(&DAT_06b3a7b0), *(long *)(param_3 + 0x38) == 0)) {
    FUN_02dcfd74(param_3);
  }
  in_stack_00000090 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  iVar3 = thunk_FUN_02da56d8(param_1,0);
  if (iVar3 < 2) {
    uVar4 = FUN_0550100c(param_1,0);
    puVar1 = PTR_DAT_06a0d188;
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
      uVar8 = 0;
      bVar2 = true;
      do {
        memcpy(&stack0x00000050,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        memcpy(&stack0x00000008,&stack0x00000050,0x48);
        uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000008);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar1);
        }
        uVar6 = FUN_061bc65c(param_2,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if ((uVar6 & 1) != 0) {
          return bVar2;
        }
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar4;
      } while (uVar4 != uVar8);
    }
    return bVar2;
  }
  thunk_FUN_02dfd288(&DAT_06b37980);
  uVar5 = thunk_FUN_02dd3144();
  uVar7 = thunk_FUN_02dfd288(&DAT_06b99890);
  FUN_054f9888(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,param_3);
}


