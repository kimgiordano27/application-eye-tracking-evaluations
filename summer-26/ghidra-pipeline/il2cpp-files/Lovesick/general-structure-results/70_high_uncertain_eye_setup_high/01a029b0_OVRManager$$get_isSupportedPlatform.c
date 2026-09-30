/*
FUNCTION_NAME: OVRManager$$get_isSupportedPlatform
ENTRY_POINT: 01a029b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isSupportedPlatform(long param_1,undefined1 param_2 [16])

{
  undefined *puVar1;
  long lVar2;
  undefined4 in_w9;
  undefined8 in_x10;
  undefined8 in_x11;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  
  uStack0000000000000000 = param_2._0_8_;
  *(undefined4 *)(unaff_x19 + 0xd8) = in_w9;
  *(undefined8 *)(unaff_x19 + 0xc0) = in_x11;
  *(undefined8 *)(unaff_x19 + 0xec) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0xe4) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0xdc) = in_stack_00000020;
  puVar1 = PTR_DAT_033f0728;
  *(undefined8 *)(unaff_x19 + 0x104) = in_x10;
  *(long *)(unaff_x19 + 0xfc) = param_2._8_8_;
  *(undefined8 *)(unaff_x19 + 0xf4) = uStack0000000000000000;
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_01320f6c(lVar2,uVar3,*(undefined8 *)StringLiteral_10483);
    *(long *)(unaff_x19 + 0x128) = lVar2;
    if (in_stack_00000040 != 0) {
      FUN_013699e8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


