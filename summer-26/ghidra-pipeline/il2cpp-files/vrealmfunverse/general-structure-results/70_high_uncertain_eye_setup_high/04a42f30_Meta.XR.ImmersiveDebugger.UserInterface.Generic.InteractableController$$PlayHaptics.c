/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$PlayHaptics
ENTRY_POINT: 04a42f30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__PlayHaptics
               (long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  
  lVar6 = *(long *)(unaff_x19 + 0x18);
  if (lVar6 != 0) {
    FUN_04d9e334(lVar6,0,param_1,0,*(undefined4 *)(unaff_x19 + 0x24),0);
  }
  lVar6 = FUN_02b3c908(*unaff_x23,unaff_w20);
  if (0 < *(int *)(unaff_x19 + 0x24)) {
    if (param_1 == 0) {
LAB_04a43000:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(param_1 + 0x18);
    iVar5 = 0;
    piVar7 = (int *)(param_1 + 0x24);
    do {
      if (iVar2 == iVar5) {
LAB_04a42ffc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (lVar6 == 0) goto LAB_04a43000;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar7[-1] / unaff_w20;
      }
      uVar3 = piVar7[-1] - iVar4 * unaff_w20;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_04a42ffc;
      lVar1 = lVar6 + (long)(int)uVar3 * 4;
      iVar5 = iVar5 + 1;
      *piVar7 = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = iVar5;
      piVar7 = piVar7 + 6;
    } while (iVar5 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),param_1);
  *(long *)(unaff_x19 + 0x10) = lVar6;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar6);
  return;
}


