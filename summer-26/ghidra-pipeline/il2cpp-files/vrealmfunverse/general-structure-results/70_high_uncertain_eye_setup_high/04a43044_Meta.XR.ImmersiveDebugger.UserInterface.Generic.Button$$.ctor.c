/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$.ctor
ENTRY_POINT: 04a43044
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button___ctor
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  long unaff_x22;
  long *plVar14;
  undefined8 unaff_x25;
  long unaff_x26;
  uint uVar15;
  undefined8 unaff_x28;
  int iVar16;
  
  FUN_04a42d28(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  iVar1 = FUN_04a44148();
  lVar5 = *(long *)(unaff_x26 + 0x10);
  if (lVar5 == 0) goto LAB_04a4332c;
  uVar15 = *(uint *)(lVar5 + 0x18);
  iVar16 = 0;
  if (uVar15 != 0) {
    iVar16 = iVar1 / (int)uVar15;
  }
  uVar12 = iVar1 - iVar16 * uVar15;
  if (uVar12 < uVar15) {
    lVar13 = *(long *)(unaff_x26 + 0x18);
    uVar15 = *(int *)(lVar5 + (ulong)uVar12 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      if (lVar13 == 0) goto LAB_04a4332c;
      uVar6 = *(undefined8 *)(lVar13 + 0x18);
      iVar16 = 0;
      lVar5 = lVar13 + 0x20;
      do {
        if ((uint)uVar6 <= uVar15) goto LAB_04a432ec;
        if (*(int *)(lVar5 + (ulong)uVar15 * 0x18) == iVar1) {
          plVar14 = *(long **)(unaff_x26 + 0x30);
          if (plVar14 == (long *)0x0) goto LAB_04a4332c;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          lVar7 = lVar5 + (ulong)uVar15 * 0x18;
          uVar6 = *(undefined8 *)(lVar7 + 8);
          uVar3 = *(undefined8 *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02b76218(lVar4);
          }
          lVar7 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar2 = (undefined8 *)FUN_02b7654c(plVar14,lVar4,0);
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle:
          uVar10 = (*(code *)*puVar2)(plVar14,uVar6,uVar3);
          if ((uVar10 & 1) != 0) {
            return 0;
          }
          uVar6 = *(undefined8 *)(lVar13 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar16) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar6 = thunk_FUN_02b79644();
          uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,unaff_x22);
        }
        if ((uint)uVar6 <= uVar15) goto LAB_04a432ec;
        iVar16 = iVar16 + 1;
        uVar15 = *(uint *)(lVar5 + (ulong)uVar15 * 0x18 + 4);
      } while (-1 < (int)uVar15);
    }
    uVar15 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar15 < 0) {
      if (lVar13 == 0) goto LAB_04a4332c;
      uVar15 = *(uint *)(unaff_x26 + 0x24);
      uVar9 = *(uint *)(lVar13 + 0x18);
      if (uVar15 == uVar9) {
        FUN_04a42e04(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180));
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a4332c;
        uVar15 = *(uint *)(unaff_x26 + 0x24);
        lVar13 = *(long *)(unaff_x26 + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar15 + 1;
        if (lVar13 == 0) goto LAB_04a4332c;
        iVar16 = 0;
        iVar8 = (int)uVar6;
        if (iVar8 != 0) {
          iVar16 = iVar1 / iVar8;
        }
        uVar12 = iVar1 - iVar16 * iVar8;
        uVar9 = *(uint *)(lVar13 + 0x18);
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar15 + 1;
      }
    }
    else {
      if (lVar13 == 0) goto LAB_04a4332c;
      uVar9 = *(uint *)(lVar13 + 0x18);
      if (uVar9 <= uVar15) goto LAB_04a432ec;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(lVar13 + (ulong)uVar15 * 0x18 + 0x24);
    }
    if (uVar15 < uVar9) {
      piVar11 = (int *)(lVar13 + 0x20 + (long)(int)uVar15 * 0x18);
      *(undefined8 *)(piVar11 + 2) = unaff_x25;
      *(undefined8 *)(piVar11 + 4) = unaff_x28;
      lVar5 = *(long *)(unaff_x26 + 0x10);
      *piVar11 = iVar1;
      if (lVar5 == 0) {
LAB_04a4332c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((uVar12 < *(uint *)(lVar5 + 0x18)) && (uVar15 < *(uint *)(lVar13 + 0x18))) {
        lVar5 = lVar5 + (ulong)uVar12 * 4;
        *(int *)(lVar13 + 0x20 + (long)(int)uVar15 * 0x18 + 4) = *(int *)(lVar5 + 0x20) + -1;
        *(uint *)(lVar5 + 0x20) = uVar15 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a432ec:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


