/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$ShareSpatialAnchors
ENTRY_POINT: 04a21110
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__ShareSpatialAnchors(void)

{
  long lVar1;
  bool in_NG;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  uint uVar11;
  long *plVar12;
  long unaff_x25;
  int iVar13;
  uint unaff_w27;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if (!in_NG) {
    if (unaff_x25 == 0) goto LAB_04a213c0;
    uVar6 = *(undefined8 *)(unaff_x25 + 0x18);
    iVar13 = 0;
    lVar1 = unaff_x25 + 0x20;
    do {
      if ((uint)uVar6 <= unaff_w27) goto LAB_04a21380;
      if (*(int *)(lVar1 + (ulong)unaff_w27 * 0x28) == unaff_w21) {
        lVar7 = lVar1 + (ulong)unaff_w27 * 0x28;
        plVar12 = *(long **)(unaff_x19 + 0x30);
        uVar14 = *(undefined8 *)(lVar7 + 0x10);
        uVar6 = *(undefined8 *)(lVar7 + 8);
        uVar17 = *(undefined8 *)(lVar7 + 0x20);
        uVar16 = *(undefined8 *)(lVar7 + 0x18);
        uVar15 = unaff_x20[1];
        uVar3 = *unaff_x20;
        uVar19 = unaff_x20[3];
        uVar18 = unaff_x20[2];
        if (plVar12 == (long *)0x0) goto LAB_04a213c0;
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04a211d0;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar7,0);
LAB_04a211d0:
        in_stack_00000050 = uVar3;
        in_stack_00000058 = uVar15;
        in_stack_00000060 = uVar18;
        in_stack_00000068 = uVar19;
        in_stack_00000070 = uVar6;
        in_stack_00000078 = uVar14;
        in_stack_00000080 = uVar16;
        in_stack_00000088 = uVar17;
        uVar10 = (*(code *)*puVar2)(plVar12,&stack0x00000070,&stack0x00000050,puVar2[1]);
        if ((uVar10 & 1) != 0) {
          return 0;
        }
        uVar6 = *(undefined8 *)(unaff_x25 + 0x18);
      }
      if ((int)(uint)uVar6 <= iVar13) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6);
      }
      if ((uint)uVar6 <= unaff_w27) goto LAB_04a21380;
      iVar13 = iVar13 + 1;
      unaff_w27 = *(uint *)(lVar1 + (ulong)unaff_w27 * 0x28 + 4);
    } while (-1 < (int)unaff_w27);
  }
  uVar11 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar11 < 0) {
    if (unaff_x25 == 0) goto LAB_04a213c0;
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    uVar5 = *(uint *)(unaff_x25 + 0x18);
    if (uVar11 == uVar5) {
      FUN_04a20e74();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a213c0;
      uVar11 = *(uint *)(unaff_x19 + 0x24);
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      *(uint *)(unaff_x19 + 0x24) = uVar11 + 1;
      if (unaff_x25 == 0) goto LAB_04a213c0;
      iVar13 = 0;
      iVar4 = (int)uVar6;
      if (iVar4 != 0) {
        iVar13 = unaff_w21 / iVar4;
      }
      in_stack_00000008._4_4_ = unaff_w21 - iVar13 * iVar4;
      uVar5 = *(uint *)(unaff_x25 + 0x18);
    }
    else {
      *(uint *)(unaff_x19 + 0x24) = uVar11 + 1;
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_04a213c0;
    uVar5 = *(uint *)(unaff_x25 + 0x18);
    if (uVar5 <= uVar11) goto LAB_04a21380;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar11 * 0x28 + 0x24);
  }
  if (uVar11 < uVar5) {
    lVar1 = unaff_x25 + 0x20;
    piVar9 = (int *)(lVar1 + (long)(int)uVar11 * 0x28);
    *piVar9 = unaff_w21;
    uVar14 = unaff_x20[1];
    uVar3 = *unaff_x20;
    uVar6 = unaff_x20[2];
    *(undefined8 *)(piVar9 + 8) = unaff_x20[3];
    *(undefined8 *)(piVar9 + 6) = uVar6;
    *(undefined8 *)(piVar9 + 4) = uVar14;
    *(undefined8 *)(piVar9 + 2) = uVar3;
    if (uVar11 < *(uint *)(unaff_x25 + 0x18)) {
      thunk_FUN_02bb0e9c(lVar1 + (long)(int)uVar11 * 0x28 + 0x20,0);
      lVar7 = *(long *)(unaff_x19 + 0x10);
      if (lVar7 == 0) {
LAB_04a213c0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((in_stack_00000008._4_4_ < *(uint *)(lVar7 + 0x18)) &&
         (uVar11 < *(uint *)(unaff_x25 + 0x18))) {
        lVar7 = lVar7 + (ulong)in_stack_00000008._4_4_ * 4;
        *(int *)(lVar1 + (long)(int)uVar11 * 0x28 + 4) = *(int *)(lVar7 + 0x20) + -1;
        *(uint *)(lVar7 + 0x20) = uVar11 + 1;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a21380:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


