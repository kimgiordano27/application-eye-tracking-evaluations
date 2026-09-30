/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Color
ENTRY_POINT: 04a42be4
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Color(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int in_w13;
  long lVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (in_w13 < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x19 + 0x18);
      if (lVar9 == 0) {
LAB_04a42d24:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_04a42d20;
      if (-1 < *(int *)(lVar9 + lVar8)) {
        if (unaff_x21 == 0) goto LAB_04a42d24;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) {
LAB_04a42d20:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar1 = (undefined8 *)(lVar9 + lVar8);
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        lVar9 = unaff_x21 + (long)(int)uVar6 * 0x18;
        *(undefined8 *)(lVar9 + 0x30) = puVar1[2];
        *(undefined8 *)(lVar9 + 0x28) = uVar11;
        *(undefined8 *)(lVar9 + 0x20) = uVar10;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_04a42d20;
        if (param_1 == 0) goto LAB_04a42d24;
        iVar2 = *(int *)(unaff_x21 + 0x20 + (long)(int)uVar6 * 0x18);
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar2 / unaff_w20;
        }
        uVar3 = iVar2 - iVar4 * unaff_w20;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_04a42d20;
        lVar9 = param_1 + (long)(int)uVar3 * 4;
        lVar5 = (long)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(int *)(unaff_x21 + 0x20 + lVar5 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1;
        *(uint *)(lVar9 + 0x20) = uVar6;
        in_w13 = *(int *)(unaff_x19 + 0x24);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((long)uVar7 < (long)in_w13);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar6;
  *(long *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x10) = param_1;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),param_1);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


