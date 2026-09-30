/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 05d16c44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetEyeRecommendedResolutionScale(void)

{
  bool bVar1;
  float *unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  fVar2 = *unaff_x19;
  if (fVar2 == INFINITY) {
LAB_05d16ce8:
    bVar1 = false;
  }
  else {
    if (unaff_s8 != INFINITY) {
      if (fVar2 <= unaff_s8) {
        fVar2 = unaff_s8;
      }
      if (*(int *)(*(long *)PTR_DAT_06fb63e8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      fVar3 = (float)FUN_05d1cd58(fVar2);
      fVar2 = (float)FUN_05d1cd58(fVar2);
      if ((0.0 <= fVar3) || ((fVar2 <= 0.0 && ((0.0 <= fVar2 || (fVar3 <= fVar2)))))) {
        if (0.0 < fVar3) {
          return 0.0 < fVar2 && fVar3 < fVar2;
        }
        goto LAB_05d16ce8;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}


