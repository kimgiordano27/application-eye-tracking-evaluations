/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnEnable
ENTRY_POINT: 04a46cb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnEnable(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint in_w10;
  long lVar9;
  int *piVar10;
  long lVar11;
  int unaff_w21;
  long unaff_x22;
  long *plVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  uint uVar13;
  undefined8 unaff_x28;
  int iVar14;
  uint uStack000000000000000c;
  
  lVar11 = *(long *)(unaff_x26 + 0x18);
  uVar13 = *(int *)(param_1 + (ulong)in_w10 * 4 + 0x20) - 1;
  uStack000000000000000c = in_w10;
  if (-1 < (int)uVar13) {
    if (lVar11 == 0) goto LAB_04a46f50;
    uVar4 = *(undefined8 *)(lVar11 + 0x18);
    iVar14 = 0;
    lVar9 = lVar11 + 0x20;
    do {
      if ((uint)uVar4 <= uVar13)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
      if (*(int *)(lVar9 + (ulong)uVar13 * 0x18) == unaff_w21) {
        plVar12 = *(long **)(unaff_x26 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_04a46f50;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
        lVar5 = lVar9 + (ulong)uVar13 * 0x18;
        uVar4 = *(undefined8 *)(lVar5 + 8);
        uVar2 = *(undefined8 *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02b76218(lVar3);
        }
        lVar5 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04a46d80;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar1 = (undefined8 *)FUN_02b7654c(plVar12,lVar3,0);
LAB_04a46d80:
        uVar8 = (*(code *)*puVar1)(plVar12,uVar4,uVar2);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar4 = *(undefined8 *)(lVar11 + 0x18);
      }
      if ((int)(uint)uVar4 <= iVar14) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar4 = thunk_FUN_02b79644();
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,unaff_x22);
      }
      if ((uint)uVar4 <= uVar13)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
      iVar14 = iVar14 + 1;
      uVar13 = *(uint *)(lVar9 + (ulong)uVar13 * 0x18 + 4);
    } while (-1 < (int)uVar13);
  }
  uVar13 = *(uint *)(unaff_x26 + 0x28);
  if ((int)uVar13 < 0) {
    if (lVar11 == 0) goto LAB_04a46f50;
    uVar13 = *(uint *)(unaff_x26 + 0x24);
    uVar7 = *(uint *)(lVar11 + 0x18);
    if (uVar13 == uVar7) {
      FUN_04a46a28(unaff_x26,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180))
      ;
      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a46f50;
      uVar13 = *(uint *)(unaff_x26 + 0x24);
      lVar11 = *(long *)(unaff_x26 + 0x18);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
      *(uint *)(unaff_x26 + 0x24) = uVar13 + 1;
      if (lVar11 == 0) goto LAB_04a46f50;
      iVar14 = 0;
      iVar6 = (int)uVar4;
      if (iVar6 != 0) {
        iVar14 = unaff_w21 / iVar6;
      }
      uStack000000000000000c = unaff_w21 - iVar14 * iVar6;
      uVar7 = *(uint *)(lVar11 + 0x18);
    }
    else {
      *(uint *)(unaff_x26 + 0x24) = uVar13 + 1;
    }
  }
  else {
    if (lVar11 == 0) goto LAB_04a46f50;
    uVar7 = *(uint *)(lVar11 + 0x18);
    if (uVar7 <= uVar13)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
    *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(lVar11 + (ulong)uVar13 * 0x18 + 0x24);
  }
  if (uVar13 < uVar7) {
    piVar10 = (int *)(lVar11 + 0x20 + (long)(int)uVar13 * 0x18);
    *(undefined8 *)(piVar10 + 2) = unaff_x25;
    *(undefined8 *)(piVar10 + 4) = unaff_x28;
    lVar9 = *(long *)(unaff_x26 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar9 == 0) {
LAB_04a46f50:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((uStack000000000000000c < *(uint *)(lVar9 + 0x18)) && (uVar13 < *(uint *)(lVar11 + 0x18))) {
      lVar9 = lVar9 + (ulong)uStack000000000000000c * 4;
      *(int *)(lVar11 + 0x20 + (long)(int)uVar13 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1;
      *(uint *)(lVar9 + 0x20) = uVar13 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


