/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 087b0fb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
    FUN_08d9d780(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar3 - param_3) < (int)(uVar1 - *(int *)(param_1 + 0x28))) {
    FUN_08d9cf18(5,0);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_087b10c8:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (-1 < *(int *)((long)puVar6 + -0xc)) {
        in_stack_00000048 = puVar6[1];
        in_stack_00000040 = *puVar6;
        in_stack_00000050 = puVar6[2];
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_069245f8(&stack0x00000020,*(undefined4 *)((long)puVar6 + -4),&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_087b10c8;
        lVar2 = param_2 + (long)(int)param_3 * 0x1c;
        param_3 = param_3 + 1;
        *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000020;
        *(ulong *)(lVar2 + 0x34) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      }
      uVar5 = uVar5 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + 0x24);
    } while (uVar1 != uVar5);
  }
  return;
}


