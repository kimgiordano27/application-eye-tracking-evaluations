/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 087b0fd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_08d9d780(0);
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w21) < (int)(uVar1 - *(int *)(unaff_x22 + 0x28))) {
    FUN_08d9cf18(5,0);
    uVar1 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x2c);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_087b10c8:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (-1 < *(int *)((long)puVar5 + -0xc)) {
        in_stack_00000048 = puVar5[1];
        in_stack_00000040 = *puVar5;
        in_stack_00000050 = puVar5[2];
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_069245f8(&stack0x00000020,*(undefined4 *)((long)puVar5 + -4),&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_087b10c8;
        lVar2 = unaff_x20 + (long)(int)unaff_w21 * 0x1c;
        unaff_w21 = unaff_w21 + 1;
        *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000020;
        *(ulong *)(lVar2 + 0x34) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      }
      uVar4 = uVar4 + 1;
      puVar5 = (undefined8 *)((long)puVar5 + 0x24);
    } while (uVar1 != uVar4);
  }
  return;
}


