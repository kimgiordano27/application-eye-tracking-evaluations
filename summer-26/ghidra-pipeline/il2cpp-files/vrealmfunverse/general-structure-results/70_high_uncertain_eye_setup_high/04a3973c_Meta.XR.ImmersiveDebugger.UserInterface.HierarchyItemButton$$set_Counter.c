/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$set_Counter
ENTRY_POINT: 04a3973c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__set_Counter
          (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  ulong in_x11;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long *plVar13;
  long unaff_x25;
  uint unaff_w27;
  uint uVar14;
  long unaff_x28;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    uVar14 = unaff_w27;
    if ((bool)in_CY) {
LAB_04a39924:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    piVar11 = (int *)(unaff_x28 + (ulong)uVar14 * (in_x11 & 0xffffffff));
    if (*piVar11 == param_2) {
      plVar13 = *(long **)(unaff_x24 + 0x30);
      if (plVar13 == (long *)0x0) {
LAB_04a39964:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      lVar9 = unaff_x28 + (ulong)uVar14 * (in_x11 & 0xffffffff);
      uVar5 = *(undefined8 *)(lVar9 + 8);
      uVar6 = *(undefined8 *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218(lVar7);
      }
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04a397dc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar13,lVar7,0);
LAB_04a397dc:
      uVar10 = (*(code *)*puVar4)(plVar13,uVar5,uVar6);
      if ((uVar10 & 1) != 0) {
        if ((int)unaff_w21 < 0) {
          uVar8 = *(uint *)(in_stack_00000028 + 0x18);
          if (uVar8 <= uVar14) goto LAB_04a39924;
          lVar7 = *(long *)(unaff_x24 + 0x10);
          if (lVar7 == 0) goto LAB_04a39964;
          if (*(uint *)(lVar7 + 0x18) <= (uint)in_stack_00000008) goto LAB_04a39924;
          *(int *)(lVar7 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x28 + (ulong)uVar14 * 0x18 + 4) + 1;
        }
        else {
          uVar8 = *(uint *)(in_stack_00000028 + 0x18);
          if ((uVar8 <= uVar14) || (uVar8 <= unaff_w21)) goto LAB_04a39924;
          *(undefined4 *)(unaff_x28 + (ulong)unaff_w21 * 0x18 + 4) =
               *(undefined4 *)(unaff_x28 + (ulong)uVar14 * 0x18 + 4);
        }
        if (uVar14 < uVar8) {
          iVar1 = *(int *)(unaff_x24 + 0x38);
          uVar2 = *(undefined4 *)(unaff_x24 + 0x28);
          iVar3 = *(int *)(unaff_x24 + 0x20) + -1;
          *(int *)(unaff_x24 + 0x20) = iVar3;
          *piVar11 = -1;
          *(undefined4 *)(unaff_x28 + (ulong)uVar14 * 0x18 + 4) = uVar2;
          *(int *)(unaff_x24 + 0x38) = iVar1 + 1;
          if (iVar3 == 0) {
            uVar14 = 0xffffffff;
            *(undefined4 *)(unaff_x24 + 0x24) = 0;
          }
          *(uint *)(unaff_x24 + 0x28) = uVar14;
          return 1;
        }
        goto LAB_04a39924;
      }
      in_x11 = 0x18;
      param_1 = *(undefined8 *)(in_stack_00000028 + 0x18);
      unaff_x25 = in_stack_00000020;
      param_2 = in_stack_00000018._4_4_;
    }
    uVar8 = (uint)param_1;
    if ((int)uVar8 <= unaff_w22) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar5 = thunk_FUN_02b79644();
      uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,unaff_x25);
    }
    if (uVar8 <= uVar14) goto LAB_04a39924;
    unaff_w22 = unaff_w22 + 1;
    unaff_w27 = *(uint *)(unaff_x28 + (ulong)uVar14 * (in_x11 & 0xffffffff) + 4);
    if ((int)unaff_w27 < 0) {
      return 0;
    }
    in_CY = uVar8 <= unaff_w27;
    unaff_w21 = uVar14;
  } while( true );
}


