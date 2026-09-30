/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_MaskMeshFilters
ENTRY_POINT: 04a268b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters(void)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  long unaff_x24;
  long *plVar17;
  long unaff_x25;
  uint uVar18;
  ulong uVar19;
  
  iVar4 = FUN_04a29ad0();
  lVar9 = *(long *)(unaff_x24 + 0x10);
  if (lVar9 == 0) {
LAB_04a26b34:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar18 = *(uint *)(lVar9 + 0x18);
  iVar16 = 0;
  if (uVar18 != 0) {
    iVar16 = iVar4 / (int)uVar18;
  }
  uVar3 = iVar4 - iVar16 * uVar18;
  if (uVar18 <= uVar3) {
LAB_04a26af4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar18 = *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar18) {
    lVar9 = *(long *)(unaff_x24 + 0x18);
    if (lVar9 == 0) goto LAB_04a26b34;
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
    iVar16 = 0;
    lVar1 = lVar9 + 0x20;
    uVar15 = 0xffffffff;
    do {
      if ((uint)uVar10 <= uVar18) goto LAB_04a26af4;
      piVar13 = (int *)(lVar1 + (ulong)uVar18 * 0x18);
      uVar19 = (ulong)uVar18;
      if (*piVar13 == iVar4) {
        plVar17 = *(long **)(unaff_x24 + 0x30);
        if (plVar17 == (long *)0x0) goto LAB_04a26b34;
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
        lVar11 = lVar1 + uVar19 * 0x18;
        uVar10 = *(undefined8 *)(lVar11 + 8);
        uVar6 = *(undefined8 *)(lVar11 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04a269ac;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar17,lVar7,0);
LAB_04a269ac:
        uVar12 = (*(code *)*puVar5)(plVar17,uVar10,uVar6);
        if ((uVar12 & 1) != 0) {
          if ((int)(uint)uVar15 < 0) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if (uVar8 <= uVar18) goto LAB_04a26af4;
            lVar9 = *(long *)(unaff_x24 + 0x10);
            if (lVar9 == 0) goto LAB_04a26b34;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_04a26af4;
            *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar1 + uVar19 * 0x18 + 4) + 1;
          }
          else {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if ((uVar8 <= uVar18) || (uVar8 <= (uint)uVar15)) goto LAB_04a26af4;
            *(undefined4 *)(lVar1 + uVar15 * 0x18 + 4) = *(undefined4 *)(lVar1 + uVar19 * 0x18 + 4);
          }
          if (uVar18 < uVar8) {
            iVar4 = *(int *)(unaff_x24 + 0x38);
            uVar2 = *(undefined4 *)(unaff_x24 + 0x28);
            iVar16 = *(int *)(unaff_x24 + 0x20) + -1;
            *(int *)(unaff_x24 + 0x20) = iVar16;
            *piVar13 = -1;
            *(undefined4 *)(lVar1 + uVar19 * 0x18 + 4) = uVar2;
            *(int *)(unaff_x24 + 0x38) = iVar4 + 1;
            if (iVar16 == 0) {
              uVar18 = 0xffffffff;
              *(undefined4 *)(unaff_x24 + 0x24) = 0;
            }
            *(uint *)(unaff_x24 + 0x28) = uVar18;
            return 1;
          }
          goto LAB_04a26af4;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x18);
      }
      if ((int)(uint)uVar10 <= iVar16) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar10 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar10,unaff_x25);
      }
      if ((uint)uVar10 <= uVar18) goto LAB_04a26af4;
      iVar16 = iVar16 + 1;
      uVar15 = (ulong)uVar18;
      uVar18 = *(uint *)(lVar1 + uVar19 * 0x18 + 4);
    } while (-1 < (int)uVar18);
  }
  return 0;
}


