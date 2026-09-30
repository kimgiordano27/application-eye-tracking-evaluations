/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateRaw
ENTRY_POINT: 03681294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036812c8) */

float OVRPlugin__GetNodePoseStateRaw(float param_1,float param_2)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar1 = 0.0;
  if (param_1 <= param_2) {
    param_2 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / param_2;
    if (param_2 < -1.0) {
      param_2 = -1.0;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    dVar2 = acos((double)param_2);
    fVar1 = (float)dVar2 * DAT_00c92a9c;
  }
  return fVar1;
}


