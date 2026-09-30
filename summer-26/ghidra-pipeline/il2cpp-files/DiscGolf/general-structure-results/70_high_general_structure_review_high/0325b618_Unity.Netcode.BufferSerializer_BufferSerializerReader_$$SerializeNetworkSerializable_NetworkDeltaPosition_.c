/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 0325b618
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


bool Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == 0) {
    FUN_02dcfd74(param_5);
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_02da56d8(param_2,0);
  if (1 < iVar2) {
    thunk_FUN_02dfd288(&DAT_06b37980);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(&DAT_06b99890);
    FUN_054f9888(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,param_5);
  }
  uVar3 = FUN_0550100c(param_2,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,(void *)((long)param_2 + uVar8 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_5 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_02dcfd18(lVar7);
      }
      uVar4 = thunk_FUN_05542350();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


