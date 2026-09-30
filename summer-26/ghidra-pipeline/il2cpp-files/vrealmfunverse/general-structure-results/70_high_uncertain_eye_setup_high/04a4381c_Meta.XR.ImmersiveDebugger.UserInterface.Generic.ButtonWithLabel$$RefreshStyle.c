/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$RefreshStyle
ENTRY_POINT: 04a4381c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__RefreshStyle(int param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x22;
  long *plVar12;
  int iVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  if (lVar7 == 0) {
LAB_04a439ac:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  iVar13 = 0;
  if (uVar2 != 0) {
    iVar13 = param_1 / (int)uVar2;
  }
  uVar3 = param_1 - iVar13 * uVar2;
  if (uVar2 <= uVar3) {
LAB_04a4396c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar2 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar7 = *(long *)(unaff_x22 + 0x18);
    if (lVar7 == 0) goto LAB_04a439ac;
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    iVar13 = 0;
    lVar1 = lVar7 + 0x20;
    do {
      if ((uint)uVar8 <= uVar2) goto LAB_04a4396c;
      if (*(int *)(lVar1 + (ulong)uVar2 * 0x18) == param_1) {
        plVar12 = *(long **)(unaff_x22 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_04a439ac;
        lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
        lVar9 = lVar1 + (ulong)uVar2 * 0x18;
        uVar8 = *(undefined8 *)(lVar9 + 8);
        uVar5 = *(undefined8 *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02b76218(lVar6);
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04a43904;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar12,lVar6,0);
LAB_04a43904:
        uVar10 = (*(code *)*puVar4)(plVar12,uVar8,uVar5,in_stack_00000008,in_stack_00000010,
                                    puVar4[1]);
        if ((uVar10 & 1) != 0) {
          return uVar2;
        }
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
      }
      if ((int)(uint)uVar8 <= iVar13) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar8 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar8,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar8,in_stack_00000018);
      }
      if ((uint)uVar8 <= uVar2) goto LAB_04a4396c;
      iVar13 = iVar13 + 1;
      uVar2 = *(uint *)(lVar1 + (ulong)uVar2 * 0x18 + 4);
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


