/*
FUNCTION_NAME: OVRManager$$get_eyeTextureFormat
ENTRY_POINT: 09083164
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_eyeTextureFormat(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x20 + 999) = 1;
  uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0xb4) = **(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0xbc) = uVar1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    OVRManager__add_VrFocusAcquired(0,*(long *)(unaff_x19 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


