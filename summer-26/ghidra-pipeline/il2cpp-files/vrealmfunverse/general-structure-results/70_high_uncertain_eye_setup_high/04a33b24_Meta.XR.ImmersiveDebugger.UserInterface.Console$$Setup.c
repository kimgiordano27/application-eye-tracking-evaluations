/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Setup
ENTRY_POINT: 04a33b24
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


void Meta_XR_ImmersiveDebugger_UserInterface_Console__Setup(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  
  uVar5 = FUN_02b76218(param_1);
  lVar6 = FUN_02b3c908(uVar5,unaff_w20);
  lVar7 = FUN_02b3c908(*unaff_x22,unaff_w20);
  iVar11 = *(int *)(unaff_x19 + 0x24);
  if (iVar11 < 1) {
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    lVar10 = 0x20;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) {
LAB_04a33c94:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_04a33c90;
      if (-1 < *(int *)(lVar12 + lVar10)) {
        if (lVar6 == 0) goto LAB_04a33c94;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
LAB_04a33c90:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar1 = (undefined8 *)(lVar12 + lVar10);
        uVar13 = puVar1[1];
        uVar5 = *puVar1;
        lVar12 = lVar6 + (long)(int)uVar8 * 0x18;
        *(undefined8 *)(lVar12 + 0x30) = puVar1[2];
        *(undefined8 *)(lVar12 + 0x28) = uVar13;
        *(undefined8 *)(lVar12 + 0x20) = uVar5;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_04a33c90;
        if (lVar7 == 0) goto LAB_04a33c94;
        iVar11 = *(int *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x18);
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar11 / unaff_w20;
        }
        uVar2 = iVar11 - iVar3 * unaff_w20;
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_04a33c90;
        lVar12 = lVar7 + (long)(int)uVar2 * 4;
        lVar4 = (long)(int)uVar8;
        uVar8 = uVar8 + 1;
        *(int *)(lVar6 + 0x20 + lVar4 * 0x18 + 4) = *(int *)(lVar12 + 0x20) + -1;
        *(uint *)(lVar12 + 0x20) = uVar8;
        iVar11 = *(int *)(unaff_x19 + 0x24);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((long)uVar9 < (long)iVar11);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar8;
  *(long *)(unaff_x19 + 0x18) = lVar6;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar6);
  *(long *)(unaff_x19 + 0x10) = lVar7;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar7);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


