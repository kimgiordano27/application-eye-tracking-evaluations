/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$ComputeNeedsRefresh
ENTRY_POINT: 04a535f8
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


void Meta_XR_ImmersiveDebugger_Hierarchy_Item__ComputeNeedsRefresh(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (unaff_x21 == 0) {
LAB_04a537f8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = *(int *)(unaff_x21 + 0x20);
  if (iVar1 != 0) {
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_04a537f8;
    iVar6 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar4 = FUN_04d21ca8(iVar1 + 1,0);
    if (iVar4 < iVar6) {
      uVar2 = *(uint *)(unaff_x21 + 0x24);
      lVar7 = *(long *)(unaff_x21 + 0x18);
      FUN_04a55910();
      if ((int)uVar2 < 1) {
        iVar6 = 0;
      }
      else {
        if (lVar7 == 0) goto LAB_04a537f8;
        uVar8 = 0;
        iVar6 = 0;
        lVar5 = lVar7 + 0x28;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(lVar5 + -8)) {
            FUN_04a55ef8();
            iVar6 = iVar6 + 1;
          }
          uVar8 = uVar8 + 1;
          lVar5 = lVar5 + 0xc;
        } while (uVar2 != uVar8);
      }
      *(int *)(unaff_x19 + 0x24) = iVar6;
    }
    else {
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_04a537f8;
      lVar7 = FUN_04d9e838(*(long *)(unaff_x21 + 0x10),0);
      puVar3 = PTR_DAT_06313588;
      if (lVar7 == 0) {
        lVar5 = 0;
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_06313588;
        lVar5 = thunk_FUN_02b79548(lVar7,lVar9);
        if (lVar5 == 0) goto LAB_04a537bc;
        uVar10 = *(undefined8 *)puVar3;
        *(long *)(unaff_x19 + 0x10) = lVar5;
        lVar5 = thunk_FUN_02b79548(lVar7,uVar10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar7,uVar10);
        }
      }
      thunk_FUN_02bb0e9c(unaff_x19 + 0x10,lVar5);
      if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_04a537f8;
      lVar7 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02b79548(lVar7,lVar9);
        if (lVar5 == 0) goto LAB_04a537bc;
      }
      lVar9 = *(long *)(unaff_x22 + 0x20);
      *(long *)(unaff_x19 + 0x18) = lVar5;
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
LAB_04a537bc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar7,lVar9);
        }
      }
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar5);
      *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
    }
    *(int *)(unaff_x19 + 0x20) = iVar1;
  }
  return;
}


