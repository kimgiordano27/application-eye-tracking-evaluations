/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$OnHoverChanged
ENTRY_POINT: 04a42f2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  
  lVar5 = FUN_02b3c908();
  lVar7 = *(long *)(unaff_x19 + 0x18);
  if (lVar7 != 0) {
    FUN_04d9e334(lVar7,0,lVar5,0,*(undefined4 *)(unaff_x19 + 0x24),0);
  }
  lVar7 = FUN_02b3c908(*unaff_x23,unaff_w20);
  if (0 < *(int *)(unaff_x19 + 0x24)) {
    if (lVar5 == 0) {
LAB_04a43000:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(lVar5 + 0x18);
    iVar6 = 0;
    piVar8 = (int *)(lVar5 + 0x24);
    do {
      if (iVar2 == iVar6) {
LAB_04a42ffc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (lVar7 == 0) goto LAB_04a43000;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar8[-1] / unaff_w20;
      }
      uVar3 = piVar8[-1] - iVar4 * unaff_w20;
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_04a42ffc;
      lVar1 = lVar7 + (long)(int)uVar3 * 4;
      iVar6 = iVar6 + 1;
      *piVar8 = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = iVar6;
      piVar8 = piVar8 + 6;
    } while (iVar6 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = lVar5;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar5);
  *(long *)(unaff_x19 + 0x10) = lVar7;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar7);
  return;
}


