/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04fda378
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
          (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  int *in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x20 + 0x20);
    if (uVar6 == unaff_w24) {
      System_Array_EmptyInternalEnumerator<Regex_CachedCodeEntryKey>___cctor();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = unaff_w24 + 1;
      if (lVar5 == 0) goto LAB_04fda518;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_04fda514;
      lVar4 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000018 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar6 + 1;
    }
    if (lVar4 == 0) {
LAB_04fda518:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04fda514;
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
  }
  else {
    uVar6 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    if (unaff_w24 <= uVar6) {
LAB_04fda514:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = unaff_x26 + (long)(int)uVar6 * 0x18;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
  }
  *(int *)(lVar4 + 0x20) = unaff_w27;
  *(int *)(lVar4 + 0x24) = *in_stack_00000018 + -1;
  *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
  *(undefined8 *)(lVar4 + 0x30) = unaff_x28;
  *in_stack_00000018 = uVar6 + 1;
  return 1;
}


