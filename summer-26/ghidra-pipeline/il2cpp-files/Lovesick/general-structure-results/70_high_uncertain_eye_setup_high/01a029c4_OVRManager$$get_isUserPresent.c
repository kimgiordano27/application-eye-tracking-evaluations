/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 01a029c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isUserPresent(long param_1,undefined1 param_2 [16])

{
  undefined *puVar1;
  long lVar2;
  undefined8 in_x9;
  undefined8 in_x10;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000040;
  
  *(undefined8 *)(unaff_x19 + 0xec) = in_x9;
  *(long *)(unaff_x19 + 0xe4) = param_2._8_8_;
  *(long *)(unaff_x19 + 0xdc) = param_2._0_8_;
  puVar1 = PTR_DAT_033f0728;
  *(undefined8 *)(unaff_x19 + 0x104) = in_x10;
  *(undefined8 *)(unaff_x19 + 0xfc) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0xf4) = in_stack_00000000;
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


