/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 069442b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetMultimodalHandsControllersSupported(undefined8 param_1)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s11;
  
  fVar1 = (float)FUN_07c8cea8(param_1,0);
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  if (0.0 <= fVar1) {
    unaff_s11 = fVar2;
  }
  *(float *)(unaff_x19 + 0x14) = unaff_s11;
  if (((*(char *)(unaff_x19 + 0x1c) != '\0') && (unaff_s8 < DAT_015c5b88)) &&
     (DAT_015c5c98 < unaff_s11)) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_059f8c60(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_084980e0);
    *(undefined4 *)(unaff_x19 + 0x14) = 0;
  }
  return;
}


