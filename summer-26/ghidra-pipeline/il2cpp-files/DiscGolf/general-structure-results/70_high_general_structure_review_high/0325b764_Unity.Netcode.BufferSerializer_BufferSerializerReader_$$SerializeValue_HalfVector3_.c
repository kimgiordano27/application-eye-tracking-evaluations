/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<HalfVector3>
ENTRY_POINT: 0325b764
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


bool Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>
               (long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02dcfd74(param_3);
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar2 = thunk_FUN_02da56d8(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_02dfd288(&DAT_06b37980);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(&DAT_06b99890);
    FUN_054f9888(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,param_3);
  }
  uVar3 = FUN_0550100c(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
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


