/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 01a0a74c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__IsMultimodalHandsControllersSupported(long param_1)

{
  bool bVar1;
  float *unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x998));
  *(undefined1 *)(unaff_x20 + 0x975) = 1;
  fVar2 = *unaff_x19;
  if (fVar2 == INFINITY) {
LAB_01a0a800:
    bVar1 = false;
  }
  else {
    if (unaff_s8 != INFINITY) {
      if (fVar2 <= unaff_s8) {
        fVar2 = unaff_s8;
      }
      if (*(int *)(*(long *)StringLiteral_10120 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar3 = (float)FUN_01a0fce8(fVar2);
      fVar2 = (float)FUN_01a0fce8(fVar2);
      if ((0.0 <= fVar3) || ((fVar2 <= 0.0 && ((0.0 <= fVar2 || (fVar3 <= fVar2)))))) {
        if (0.0 < fVar3) {
          return 0.0 < fVar2 && fVar3 < fVar2;
        }
        goto LAB_01a0a800;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}


