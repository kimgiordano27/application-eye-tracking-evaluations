/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelScrollRect$$OnScroll
ENTRY_POINT: 04a4097c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelScrollRect__OnScroll
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if ((DAT_066c6a24 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322378);
    FUN_02b3c81c(PTR_DAT_06313588);
    DAT_066c6a24 = 1;
  }
  if (param_2 == 0) {
LAB_04a40bbc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_04a40bbc;
    iVar6 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar4 = FUN_04d21ca8(iVar1 + 1,0);
    if (iVar4 < iVar6) {
      uVar2 = *(uint *)(param_2 + 0x24);
      lVar7 = *(long *)(param_2 + 0x18);
      FUN_04a42d28(param_1,iVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70)
                  );
      if ((int)uVar2 < 1) {
        iVar6 = 0;
      }
      else {
        if (lVar7 == 0) goto LAB_04a40bbc;
        uVar8 = 0;
        iVar6 = 0;
        puVar10 = (undefined8 *)(lVar7 + 0x30);
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(puVar10 + -2)) {
            FUN_04a43330(param_1,iVar6,*(int *)(puVar10 + -2),puVar10[-1],*puVar10);
            iVar6 = iVar6 + 1;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 3;
        } while (uVar2 != uVar8);
      }
      *(int *)(param_1 + 0x24) = iVar6;
    }
    else {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_04a40bbc;
      lVar7 = FUN_04d9e838(*(long *)(param_2 + 0x10),0);
      puVar3 = PTR_DAT_06313588;
      if (lVar7 == 0) {
        lVar5 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_06313588;
        lVar5 = thunk_FUN_02b79548(lVar7,lVar9);
        if (lVar5 == 0) goto LAB_04a40b80;
        uVar11 = *(undefined8 *)puVar3;
        *(long *)(param_1 + 0x10) = lVar5;
        lVar5 = thunk_FUN_02b79548(lVar7,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar7,uVar11);
        }
      }
      thunk_FUN_02bb0e9c(param_1 + 0x10,lVar5);
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_04a40bbc;
      lVar7 = FUN_04d9e838(*(long *)(param_2 + 0x18),0);
      lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02b79548(lVar7,lVar9);
        if (lVar5 == 0) goto LAB_04a40b80;
      }
      lVar9 = *(long *)(param_3 + 0x20);
      *(long *)(param_1 + 0x18) = lVar5;
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x80);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02b79548(lVar7,lVar9);
        if (lVar5 == 0) {
LAB_04a40b80:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar7,lVar9);
        }
      }
      thunk_FUN_02bb0e9c((long *)(param_1 + 0x18),lVar5);
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    }
    *(int *)(param_1 + 0x20) = iVar1;
  }
  return;
}


