/*
FUNCTION_NAME: FUN_021b3004
ENTRY_POINT: 021b3004
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_021b3004(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  long unaff_x19;
  uint uVar5;
  long unaff_x25;
  int unaff_w26;
  int *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000008;
  
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x19 + 0x20);
    if (uVar5 == in_w8) {
      FUN_021b3558();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar5 + 1;
      if (lVar4 == 0)
      goto System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w26 / (int)uVar1;
      }
      uVar2 = unaff_w26 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_021b31b0;
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      unaff_x27 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar5 + 1;
    }
    if (unaff_x25 == 0) {
System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar5) goto LAB_021b31b0;
    lVar4 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    uVar5 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar5) {
LAB_021b31b0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar4 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x25 + lVar4 * 0x1c + 0x24);
  }
  lVar4 = unaff_x25 + lVar4 * 0x1c;
  *(int *)(lVar4 + 0x20) = unaff_w26;
  *(int *)(lVar4 + 0x24) = *unaff_x27 + -1;
  *(undefined4 *)(lVar4 + 0x2c) = unaff_s11;
  *(undefined4 *)(lVar4 + 0x30) = unaff_s10;
  *(undefined4 *)(lVar4 + 0x34) = unaff_s9;
  *(undefined4 *)(lVar4 + 0x38) = unaff_s8;
  *(undefined4 *)(lVar4 + 0x28) = in_stack_00000008._4_4_;
  *unaff_x27 = uVar5 + 1;
  return 1;
}


