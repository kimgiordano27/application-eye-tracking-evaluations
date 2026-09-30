/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$LateUpdate
ENTRY_POINT: 04a46c98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__LateUpdate(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long unaff_x22;
  long *plVar13;
  undefined8 unaff_x25;
  long unaff_x26;
  uint uVar14;
  undefined8 unaff_x28;
  int iVar15;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  iVar15 = 0;
  if (uVar14 != 0) {
    iVar15 = param_2 / (int)uVar14;
  }
  uVar11 = param_2 - iVar15 * uVar14;
  if (uVar11 < uVar14) {
    lVar12 = *(long *)(unaff_x26 + 0x18);
    uVar14 = *(int *)(param_1 + (ulong)uVar11 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      if (lVar12 == 0) goto LAB_04a46f50;
      uVar4 = *(undefined8 *)(lVar12 + 0x18);
      iVar15 = 0;
      lVar9 = lVar12 + 0x20;
      do {
        if ((uint)uVar4 <= uVar14)
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
        if (*(int *)(lVar9 + (ulong)uVar14 * 0x18) == param_2) {
          plVar13 = *(long **)(unaff_x26 + 0x30);
          if (plVar13 == (long *)0x0) goto LAB_04a46f50;
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          lVar5 = lVar9 + (ulong)uVar14 * 0x18;
          uVar4 = *(undefined8 *)(lVar5 + 8);
          uVar2 = *(undefined8 *)(lVar5 + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02b76218(lVar3);
          }
          lVar5 = *plVar13;
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
          puVar1 = (undefined8 *)FUN_02b7654c(plVar13,lVar3,0);
LAB_04a46d80:
          uVar8 = (*(code *)*puVar1)(plVar13,uVar4,uVar2);
          if ((uVar8 & 1) != 0) {
            return 0;
          }
          uVar4 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar4 <= iVar15) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar4 = thunk_FUN_02b79644();
          uVar2 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar4,unaff_x22);
        }
        if ((uint)uVar4 <= uVar14)
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
        iVar15 = iVar15 + 1;
        uVar14 = *(uint *)(lVar9 + (ulong)uVar14 * 0x18 + 4);
      } while (-1 < (int)uVar14);
    }
    uVar14 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar14 < 0) {
      if (lVar12 == 0) goto LAB_04a46f50;
      uVar14 = *(uint *)(unaff_x26 + 0x24);
      uVar7 = *(uint *)(lVar12 + 0x18);
      if (uVar14 == uVar7) {
        FUN_04a46a28(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180));
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a46f50;
        uVar14 = *(uint *)(unaff_x26 + 0x24);
        lVar12 = *(long *)(unaff_x26 + 0x18);
        uVar4 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar14 + 1;
        if (lVar12 == 0) goto LAB_04a46f50;
        iVar15 = 0;
        iVar6 = (int)uVar4;
        if (iVar6 != 0) {
          iVar15 = param_2 / iVar6;
        }
        uVar11 = param_2 - iVar15 * iVar6;
        uVar7 = *(uint *)(lVar12 + 0x18);
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar14 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_04a46f50;
      uVar7 = *(uint *)(lVar12 + 0x18);
      if (uVar7 <= uVar14)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar14 * 0x18 + 0x24);
    }
    if (uVar14 < uVar7) {
      piVar10 = (int *)(lVar12 + 0x20 + (long)(int)uVar14 * 0x18);
      *(undefined8 *)(piVar10 + 2) = unaff_x25;
      *(undefined8 *)(piVar10 + 4) = unaff_x28;
      lVar9 = *(long *)(unaff_x26 + 0x10);
      *piVar10 = param_2;
      if (lVar9 == 0) {
LAB_04a46f50:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((uVar11 < *(uint *)(lVar9 + 0x18)) && (uVar14 < *(uint *)(lVar12 + 0x18))) {
        lVar9 = lVar9 + (ulong)uVar11 * 4;
        *(int *)(lVar12 + 0x20 + (long)(int)uVar14 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1;
        *(uint *)(lVar9 + 0x20) = uVar14 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


