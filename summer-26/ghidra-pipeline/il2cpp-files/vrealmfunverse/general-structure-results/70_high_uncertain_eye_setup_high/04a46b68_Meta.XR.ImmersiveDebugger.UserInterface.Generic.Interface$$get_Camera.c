/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$get_Camera
ENTRY_POINT: 04a46b68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__get_Camera(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04d9e334(param_1,0);
  lVar5 = FUN_02b3c908(*unaff_x23,unaff_w20);
  if (0 < *(int *)(unaff_x19 + 0x24)) {
    if (unaff_x22 == 0) {
LAB_04a46c24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(unaff_x22 + 0x18);
    iVar6 = 0;
    piVar7 = (int *)(unaff_x22 + 0x24);
    do {
      if (iVar2 == iVar6) {
LAB_04a46c20:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (lVar5 == 0) goto LAB_04a46c24;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar7[-1] / unaff_w20;
      }
      uVar3 = piVar7[-1] - iVar4 * unaff_w20;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_04a46c20;
      lVar1 = lVar5 + (long)(int)uVar3 * 4;
      iVar6 = iVar6 + 1;
      *piVar7 = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = iVar6;
      piVar7 = piVar7 + 6;
    } while (iVar6 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x22;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x10) = lVar5;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar5);
  return;
}


