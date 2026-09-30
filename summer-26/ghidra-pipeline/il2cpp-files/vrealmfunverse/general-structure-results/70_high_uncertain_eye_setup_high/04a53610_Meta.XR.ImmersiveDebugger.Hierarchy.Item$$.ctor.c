/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$.ctor
ENTRY_POINT: 04a53610
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Item___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long in_x9;
  long unaff_x19;
  int unaff_w20;
  int iVar5;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if (*(int *)(**(long **)(in_x9 + 0x378) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar3 = FUN_04d21ca8(unaff_w20 + 1,0);
  if (iVar3 < iVar5) {
    uVar1 = *(uint *)(unaff_x21 + 0x24);
    lVar6 = *(long *)(unaff_x21 + 0x18);
    FUN_04a55910();
    if ((int)uVar1 < 1) {
      iVar5 = 0;
    }
    else {
      if (lVar6 == 0) goto LAB_04a537f8;
      uVar7 = 0;
      iVar5 = 0;
      lVar4 = lVar6 + 0x28;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (-1 < *(int *)(lVar4 + -8)) {
          FUN_04a55ef8();
          iVar5 = iVar5 + 1;
        }
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + 0xc;
      } while (uVar1 != uVar7);
    }
    *(int *)(unaff_x19 + 0x24) = iVar5;
  }
  else {
    if (*(long *)(unaff_x21 + 0x10) == 0) {
LAB_04a537f8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = FUN_04d9e838(*(long *)(unaff_x21 + 0x10),0);
    puVar2 = PTR_DAT_06313588;
    if (lVar6 == 0) {
      lVar4 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      lVar8 = *(long *)PTR_DAT_06313588;
      lVar4 = thunk_FUN_02b79548(lVar6,lVar8);
      if (lVar4 == 0) goto LAB_04a537bc;
      uVar9 = *(undefined8 *)puVar2;
      *(long *)(unaff_x19 + 0x10) = lVar4;
      lVar4 = thunk_FUN_02b79548(lVar6,uVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar6,uVar9);
      }
    }
    thunk_FUN_02bb0e9c(unaff_x19 + 0x10,lVar4);
    if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_04a537f8;
    lVar6 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar6,lVar8);
      if (lVar4 == 0) goto LAB_04a537bc;
    }
    lVar8 = *(long *)(unaff_x22 + 0x20);
    *(long *)(unaff_x19 + 0x18) = lVar4;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar6,lVar8);
      if (lVar4 == 0) {
LAB_04a537bc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar6,lVar8);
      }
    }
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar4);
    *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  }
  *(int *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


