/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 0492bfac
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


uint System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor
               (void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  uint uVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  iVar4 = 0;
  if (in_w9 != 0) {
    iVar4 = unaff_w20 / (int)in_w9;
  }
  uVar5 = unaff_w20 - iVar4 * in_w9;
  if (uVar5 < in_w9) {
    if (unaff_x23 == 0) {
LAB_0492c1cc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar5 = *(int *)(unaff_x22 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (uVar5 < uVar1) {
      iVar4 = 0;
      do {
        if (*(int *)(unaff_x23 + (long)(int)uVar5 * 0x24 + 0x20) == unaff_w20) {
          plVar2 = (long *)FUN_03642a0c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_0492c1c8;
          if (plVar2 == (long *)0x0) goto LAB_0492c1cc;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined4 *)(unaff_x23 + (long)(int)uVar5 * 0x24 + 0x28),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
          if ((uVar3 & 1) != 0) {
            return uVar5;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar5) goto LAB_0492c1c8;
        uVar5 = *(uint *)(unaff_x23 + (long)(int)uVar5 * 0x24 + 0x24);
        if ((int)uVar1 <= iVar4) {
          FUN_050280d4(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar4 = iVar4 + 1;
      } while (uVar5 < uVar1);
    }
    return uVar5;
  }
LAB_0492c1c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


