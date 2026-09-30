/*
FUNCTION_NAME: OVRManager$$get_enableDynamicResolution
ENTRY_POINT: 073c367c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_enableDynamicResolution(void)

{
  long lVar1;
  float *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  float fVar2;
  float unaff_s11;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (unaff_w22 < *(uint *)(lVar1 + 0x18)) {
    fVar2 = (float)FUN_0863da0c(lVar1 + unaff_x23,0);
    fVar2 = unaff_s11 - fVar2;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *unaff_x19 = fVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


