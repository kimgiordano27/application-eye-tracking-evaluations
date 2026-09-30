/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0492bfa0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
               (void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_05023540();
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)uVar2 / (int)uVar1;
  }
  uVar6 = uVar2 - iVar5 * uVar1;
  if (uVar6 < uVar1) {
    if (unaff_x23 == 0) {
LAB_0492c1cc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = *(int *)(unaff_x22 + (ulong)uVar6 * 4 + 0x20) - 1;
    if (uVar6 < uVar1) {
      iVar5 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar6 * 0x24 + 0x20) == uVar2) {
          plVar3 = (long *)FUN_03642a0c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_0492c1c8;
          if (plVar3 == (long *)0x0) goto LAB_0492c1cc;
          uVar4 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined4 *)(unaff_x23 + (long)(int)uVar6 * 0x24 + 0x28),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            return uVar6;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar6) goto LAB_0492c1c8;
        uVar6 = *(uint *)(unaff_x23 + (long)(int)uVar6 * 0x24 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_050280d4(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar6 < uVar1);
    }
    return uVar6;
  }
LAB_0492c1c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


