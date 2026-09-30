/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 068c16c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(long param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
                    /* try { // try from 068c16dc to 069c17b7 has its CatchHandler @ 068c16dc
                       catch() { ... } // from try @ 068c16dc with catch @ 068c16dc
                       catch() { ... } // from try @ 068c18e0 with catch @ 068c16dc
                       catch() { ... } // from try @ 068c1978 with catch @ 068c16dc
                       catch() { ... } // from try @ 068c1a84 with catch @ 068c16dc
                       catch() { ... } // from try @ 068c1afc with catch @ 068c16dc
                       catch() { ... } // from try @ 068c1b3c with catch @ 068c16dc
                       catch() { ... } // from try @ 068c1bbc with catch @ 068c16dc */
  if (param_4 * param_4 + param_2 + param_3 < *(float *)(param_1 + 0x61c)) {
    return;
  }
  FUN_0574ab68(param_5,*(undefined8 *)PTR_DAT_084b2038);
  FUN_068e3cc4();
  return;
}


