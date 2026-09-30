/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_TextStyle
ENTRY_POINT: 04a43828
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_TextStyle
               (long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint in_w10;
  int *piVar9;
  long unaff_x22;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  iVar12 = 0;
  if (in_w10 != 0) {
    iVar12 = param_2 / (int)in_w10;
  }
  uVar2 = param_2 - iVar12 * in_w10;
  if (in_w10 <= uVar2) {
LAB_04a4396c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar2 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar11 = *(long *)(unaff_x22 + 0x18);
    if (lVar11 == 0) {
LAB_04a439ac:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    iVar12 = 0;
    lVar1 = lVar11 + 0x20;
    do {
      if ((uint)uVar6 <= uVar2) goto LAB_04a4396c;
      if (*(int *)(lVar1 + (ulong)uVar2 * 0x18) == param_2) {
        plVar10 = *(long **)(unaff_x22 + 0x30);
        if (plVar10 == (long *)0x0) goto LAB_04a439ac;
        lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
        lVar7 = lVar1 + (ulong)uVar2 * 0x18;
        uVar6 = *(undefined8 *)(lVar7 + 8);
        uVar4 = *(undefined8 *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218(lVar5);
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04a43904;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_04a43904:
        uVar8 = (*(code *)*puVar3)(plVar10,uVar6,uVar4,in_stack_00000008,in_stack_00000010,puVar3[1]
                                  );
        if ((uVar8 & 1) != 0) {
          return uVar2;
        }
        uVar6 = *(undefined8 *)(lVar11 + 0x18);
      }
      if ((int)(uint)uVar6 <= iVar12) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,in_stack_00000018);
      }
      if ((uint)uVar6 <= uVar2) goto LAB_04a4396c;
      iVar12 = iVar12 + 1;
      uVar2 = *(uint *)(lVar1 + (ulong)uVar2 * 0x18 + 4);
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


