/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 031514b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03151524) */

float OVRPlugin__GetNodePositionValid(float param_1)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = SQRT((unaff_s8 * unaff_s8 + param_1) *
               (unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12));
  fVar1 = 0.0;
  if (DAT_00b55154 <= fVar3) {
    fVar3 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar3;
    if (fVar3 < -1.0) {
      fVar3 = -1.0;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar2 = acos((double)fVar3);
    fVar1 = (float)dVar2 * DAT_00b556e8;
  }
  return fVar1;
}


