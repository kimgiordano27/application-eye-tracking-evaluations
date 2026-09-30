/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$set_LogCollapseMode
ENTRY_POINT: 04a33aac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__set_LogCollapseMode(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((*(byte *)(unaff_x21 + 0x9fd) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322378);
    FUN_02b3c81c(PTR_DAT_06313588);
    *(undefined1 *)(unaff_x21 + 0x9fd) = 1;
  }
  iVar6 = *(int *)(unaff_x19 + 0x20);
  if (iVar6 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar5 = PTR_DAT_06313588;
    iVar6 = FUN_04d21b24(iVar6,0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218(lVar9);
    }
    lVar9 = FUN_02b3c908(lVar9,iVar6);
    lVar7 = FUN_02b3c908(*(undefined8 *)puVar5,iVar6);
    iVar12 = *(int *)(unaff_x19 + 0x24);
    if (iVar12 < 1) {
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      lVar11 = 0x20;
      do {
        lVar13 = *(long *)(unaff_x19 + 0x18);
        if (lVar13 == 0) {
LAB_04a33c94:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_04a33c90;
        if (-1 < *(int *)(lVar13 + lVar11)) {
          if (lVar9 == 0) goto LAB_04a33c94;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_04a33c90:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          puVar1 = (undefined8 *)(lVar13 + lVar11);
          uVar15 = puVar1[1];
          uVar14 = *puVar1;
          lVar13 = lVar9 + (long)(int)uVar8 * 0x18;
          *(undefined8 *)(lVar13 + 0x30) = puVar1[2];
          *(undefined8 *)(lVar13 + 0x28) = uVar15;
          *(undefined8 *)(lVar13 + 0x20) = uVar14;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_04a33c90;
          if (lVar7 == 0) goto LAB_04a33c94;
          iVar12 = *(int *)(lVar9 + 0x20 + (long)(int)uVar8 * 0x18);
          iVar3 = 0;
          if (iVar6 != 0) {
            iVar3 = iVar12 / iVar6;
          }
          uVar2 = iVar12 - iVar3 * iVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_04a33c90;
          lVar13 = lVar7 + (long)(int)uVar2 * 4;
          lVar4 = (long)(int)uVar8;
          uVar8 = uVar8 + 1;
          *(int *)(lVar9 + 0x20 + lVar4 * 0x18 + 4) = *(int *)(lVar13 + 0x20) + -1;
          *(uint *)(lVar13 + 0x20) = uVar8;
          iVar12 = *(int *)(unaff_x19 + 0x24);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while ((long)uVar10 < (long)iVar12);
    }
    *(uint *)(unaff_x19 + 0x24) = uVar8;
    *(long *)(unaff_x19 + 0x18) = lVar9;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar9);
    *(long *)(unaff_x19 + 0x10) = lVar7;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar7);
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  }
  return;
}


