/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 051b0908
PROGRAM: hellodot-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_position(void)

{
  bool bVar1;
  int in_w8;
  float fVar2;
  float fVar3;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  fVar2 = (float)FUN_051b64c8();
  fVar3 = (float)FUN_051b64c8();
  if ((0.0 <= fVar2) || ((fVar3 <= 0.0 && ((0.0 <= fVar3 || (fVar2 <= fVar3)))))) {
    if (fVar2 <= 0.0) {
      bVar1 = false;
    }
    else {
      bVar1 = 0.0 < fVar3 && fVar2 < fVar3;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


