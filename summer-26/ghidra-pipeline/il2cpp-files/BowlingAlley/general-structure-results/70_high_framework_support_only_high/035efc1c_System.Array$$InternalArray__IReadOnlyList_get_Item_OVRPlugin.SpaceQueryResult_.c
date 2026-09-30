/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 035efc1c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
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
    FUN_03293514(param_5);
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_032f6668(param_2,0);
  if (1 < iVar2) {
    thunk_FUN_032e1da0(PTR_DAT_0727fb90);
    uVar5 = thunk_FUN_032a56a0();
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_0727fb98);
    FUN_05934a58(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,param_5);
  }
  uVar3 = FUN_0593be7c(param_2,0);
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
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(param_5 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        FUN_032934b8(lVar7);
      }
      uVar4 = thunk_FUN_0597d930();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


