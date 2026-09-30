/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03b8ccf4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int System_Array__InternalArray__set_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>
              (long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0322bf50(param_3);
  }
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  iVar1 = thunk_FUN_03201a1c(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_03257e30(PTR_DAT_075d6460);
    uVar4 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d6468);
    FUN_05e12d58(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4,param_3);
  }
  uVar2 = FUN_05e1a3d8(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000090,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000078 = param_2[5];
      in_stack_00000070 = param_2[4];
      in_stack_00000088 = param_2[7];
      in_stack_00000080 = param_2[6];
      in_stack_00000058 = param_2[1];
      in_stack_00000050 = *param_2;
      in_stack_00000068 = param_2[3];
      in_stack_00000060 = param_2[2];
      thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000050);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar6);
      }
      uVar3 = thunk_FUN_05e5b8f0();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_032019d8(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_032019d8(param_1,0,0);
  return iVar1 + -1;
}


