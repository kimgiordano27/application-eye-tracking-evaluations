/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 019ff334
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_PassthroughLayerResumed(float param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_0268fd10(*(long *)(unaff_x19 + 0x18),0);
    uVar1 = FUN_019ff598(-param_1);
    if ((unaff_w20 & unaff_w21) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = *(float *)(unaff_x19 + 0x60) - unaff_s9;
    }
    FUN_019ff750(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x38));
    if (0.0 <= unaff_s8) {
      unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x60);
    }
    else if (unaff_w20 != 0) {
      unaff_d11 = (ulong)(uint)(unaff_s10 + *(float *)(unaff_x19 + 0x60));
    }
    FUN_019ff7d8(unaff_d11);
    FUN_019ff82c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


