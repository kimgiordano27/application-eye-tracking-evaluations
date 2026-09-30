/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Sprite
ENTRY_POINT: 04a42bcc
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Sprite(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = FUN_02b3c908(*unaff_x22,unaff_w20);
  iVar9 = *(int *)(unaff_x19 + 0x24);
  if (iVar9 < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    lVar8 = 0x20;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) {
LAB_04a42d24:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_04a42d20;
      if (-1 < *(int *)(lVar10 + lVar8)) {
        if (param_1 == 0) goto LAB_04a42d24;
        if (*(uint *)(param_1 + 0x18) <= uVar6) {
LAB_04a42d20:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar1 = (undefined8 *)(lVar10 + lVar8);
        uVar12 = puVar1[1];
        uVar11 = *puVar1;
        lVar10 = param_1 + (long)(int)uVar6 * 0x18;
        *(undefined8 *)(lVar10 + 0x30) = puVar1[2];
        *(undefined8 *)(lVar10 + 0x28) = uVar12;
        *(undefined8 *)(lVar10 + 0x20) = uVar11;
        if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_04a42d20;
        if (lVar5 == 0) goto LAB_04a42d24;
        iVar9 = *(int *)(param_1 + 0x20 + (long)(int)uVar6 * 0x18);
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar9 / unaff_w20;
        }
        uVar2 = iVar9 - iVar3 * unaff_w20;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04a42d20;
        lVar10 = lVar5 + (long)(int)uVar2 * 4;
        lVar4 = (long)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(int *)(param_1 + 0x20 + lVar4 * 0x18 + 4) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar6;
        iVar9 = *(int *)(unaff_x19 + 0x24);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((long)uVar7 < (long)iVar9);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar6;
  *(long *)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),param_1);
  *(long *)(unaff_x19 + 0x10) = lVar5;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar5);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


