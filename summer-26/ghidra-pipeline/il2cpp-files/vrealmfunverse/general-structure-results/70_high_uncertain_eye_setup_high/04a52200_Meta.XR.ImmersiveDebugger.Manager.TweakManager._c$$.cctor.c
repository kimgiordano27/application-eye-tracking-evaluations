/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager.<>c$$.cctor
ENTRY_POINT: 04a52200
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c___cctor(void)

{
  int iVar1;
  uint in_w8;
  uint in_w9;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long in_x13;
  int unaff_w21;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined8 in_stack_00000008;
  
  if (in_w8 == in_w9) {
    FUN_04a51e1c();
    if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a52344;
    in_w8 = *(uint *)(unaff_x26 + 0x24);
    in_x13 = *(long *)(unaff_x26 + 0x18);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
    *(uint *)(unaff_x26 + 0x24) = in_w8 + 1;
    if (in_x13 == 0) goto LAB_04a52344;
    iVar1 = 0;
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      iVar1 = unaff_w21 / iVar2;
    }
    in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar2;
    in_w9 = *(uint *)(in_x13 + 0x18);
  }
  else {
    *(uint *)(unaff_x26 + 0x24) = in_w8 + 1;
  }
  if (in_w8 < in_w9) {
    piVar5 = (int *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18);
    *(undefined8 *)(piVar5 + 2) = unaff_x25;
    *(undefined8 *)(piVar5 + 4) = unaff_x28;
    lVar4 = *(long *)(unaff_x26 + 0x10);
    *piVar5 = unaff_w21;
    if (lVar4 == 0) {
LAB_04a52344:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar4 + 0x18)) && (in_w8 < *(uint *)(in_x13 + 0x18))) {
      lVar4 = lVar4 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18 + 4) = *(int *)(lVar4 + 0x20) + -1;
      *(uint *)(lVar4 + 0x20) = in_w8 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


