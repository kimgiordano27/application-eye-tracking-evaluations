/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 01f78af8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__set_rotation(void)

{
  uint uVar1;
  
  FUN_0141c84c();
                    /* try { // try from 01f78b18 to 02078f7f has its CatchHandler @ 01f78b18
                       catch() { ... } // from try @ 01f78b18 with catch @ 01f78b18
                       catch() { ... } // from try @ 01f78fc8 with catch @ 01f78b18
                       catch() { ... } // from try @ 01f790d0 with catch @ 01f78b18
                       catch() { ... } // from try @ 01f7919c with catch @ 01f78b18
                       catch() { ... } // from try @ 01f791d4 with catch @ 01f78b18
                       catch() { ... } // from try @ 01f79218 with catch @ 01f78b18
                       catch() { ... } // from try @ 01f79254 with catch @ 01f78b18 */
  uVar1 = FUN_01f7b264();
  return uVar1 & 1;
}


