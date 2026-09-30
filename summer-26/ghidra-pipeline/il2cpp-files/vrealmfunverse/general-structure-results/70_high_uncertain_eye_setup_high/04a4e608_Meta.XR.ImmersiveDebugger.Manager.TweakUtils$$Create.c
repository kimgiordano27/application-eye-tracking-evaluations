/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Create
ENTRY_POINT: 04a4e608
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Create(void)

{
  int iVar1;
  uint in_w8;
  uint in_w9;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w21;
  long unaff_x26;
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  
  if (in_w8 == in_w9) {
    FUN_04a4e230();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a4e748;
    in_w8 = *(uint *)(unaff_x19 + 0x24);
    unaff_x26 = *(long *)(unaff_x19 + 0x18);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = in_w8 + 1;
    if (unaff_x26 == 0) goto LAB_04a4e748;
    iVar1 = 0;
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      iVar1 = unaff_w21 / iVar2;
    }
    in_stack_00000008 = unaff_w21 - iVar1 * iVar2;
    in_w9 = *(uint *)(unaff_x26 + 0x18);
  }
  else {
    *(uint *)(unaff_x19 + 0x24) = in_w8 + 1;
  }
  if (in_w8 < in_w9) {
    piVar5 = (int *)(unaff_x26 + 0x20 + (long)(int)in_w8 * 0xc);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *piVar5 = unaff_w21;
    *(undefined1 *)(piVar5 + 2) = in_stack_00000000._4_1_;
    if (lVar4 == 0) {
LAB_04a4e748:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (ulong)in_stack_00000008 * 4;
      *(int *)(unaff_x26 + 0x20 + (long)(int)in_w8 * 0xc + 4) = *(int *)(lVar4 + 0x20) + -1;
      *(uint *)(lVar4 + 0x20) = in_w8 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


