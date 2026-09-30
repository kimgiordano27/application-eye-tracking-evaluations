/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 05307d74
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(float param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  
  fVar2 = -unaff_s9;
  if (0.0 <= param_2 + param_1) {
    fVar2 = unaff_s9;
  }
  *(float *)(unaff_x19 + 0x160) = fVar2;
  fVar3 = -1.0;
  if (0.0 <= fVar2) {
    fVar3 = 1.0;
  }
  if (unaff_s8 != fVar3) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05307dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return;
}


