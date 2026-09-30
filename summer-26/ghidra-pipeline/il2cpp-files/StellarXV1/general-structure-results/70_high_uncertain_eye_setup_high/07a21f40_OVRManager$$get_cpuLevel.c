/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 07a21f40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_cpuLevel(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  FUN_07a223c0(param_1,*(undefined8 *)(unaff_x19 + 0x48));
  FUN_07a22448(*(undefined4 *)(unaff_x19 + 0x68));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_089c7534(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = OVRManager__get_eyeTextureFormat(-unaff_s9 - unaff_s10);
    fVar2 = 0.0;
    if ((unaff_s8 < 0.0) && (unaff_w20 != 0)) {
      fVar2 = *(float *)(unaff_x19 + 0x68) - unaff_s9;
    }
    FUN_07a223c0(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x40));
    if (0.0 <= unaff_s8) {
      unaff_s11 = *(float *)(unaff_x19 + 0x68);
    }
    else if (unaff_w20 != 0) {
      unaff_s11 = unaff_s10 + *(float *)(unaff_x19 + 0x68);
    }
    FUN_07a22448(unaff_s11);
    FUN_07a2249c(unaff_s9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


