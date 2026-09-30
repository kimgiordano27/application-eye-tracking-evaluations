/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnPointerClick
ENTRY_POINT: 04a37774
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnPointerClick(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar8 = *(int *)(unaff_x19 + 0x24);
  if (iVar8 < 1) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    lVar7 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x19 + 0x18);
      if (lVar9 == 0) {
LAB_04a378b8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_04a378b4;
      if (-1 < *(int *)(lVar9 + lVar7)) {
        if (unaff_x21 == 0) goto LAB_04a378b8;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) {
LAB_04a378b4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar1 = (undefined8 *)(lVar9 + lVar7);
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        lVar9 = unaff_x21 + (long)(int)uVar5 * 0x18;
        *(undefined8 *)(lVar9 + 0x30) = puVar1[2];
        *(undefined8 *)(lVar9 + 0x28) = uVar11;
        *(undefined8 *)(lVar9 + 0x20) = uVar10;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_04a378b4;
        if (param_1 == 0) goto LAB_04a378b8;
        iVar8 = *(int *)(unaff_x21 + 0x20 + (long)(int)uVar5 * 0x18);
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar8 / unaff_w20;
        }
        uVar2 = iVar8 - iVar3 * unaff_w20;
        if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04a378b4;
        lVar9 = param_1 + (long)(int)uVar2 * 4;
        lVar4 = (long)(int)uVar5;
        uVar5 = uVar5 + 1;
        *(int *)(unaff_x21 + 0x20 + lVar4 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1;
        *(uint *)(lVar9 + 0x20) = uVar5;
        iVar8 = *(int *)(unaff_x19 + 0x24);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar6 < (long)iVar8);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar5;
  *(long *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x10) = param_1;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),param_1);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


