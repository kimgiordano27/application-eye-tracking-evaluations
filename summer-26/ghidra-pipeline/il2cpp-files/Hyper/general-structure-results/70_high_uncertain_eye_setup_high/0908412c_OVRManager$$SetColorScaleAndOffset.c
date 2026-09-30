/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 0908412c
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_0908245c();
  if (DAT_0b31f3e7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
  *(undefined8 *)(param_2 + 0xb4) = **(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  *(undefined4 *)(param_2 + 0xbc) = uVar1;
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_0907faf0(param_1,*(long *)(param_2 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


