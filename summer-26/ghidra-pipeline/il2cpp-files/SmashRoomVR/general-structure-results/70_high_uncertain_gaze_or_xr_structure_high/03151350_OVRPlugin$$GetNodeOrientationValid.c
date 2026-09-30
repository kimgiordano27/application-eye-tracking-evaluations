/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 03151350
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


/* WARNING: Removing unreachable block (ram,0x031513e4) */

float OVRPlugin__GetNodeOrientationValid(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x438));
  *(undefined1 *)(unaff_x19 + 0x315) = 1;
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar4 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) *
               (unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12));
  fVar2 = 0.0;
  if (DAT_00b55154 <= fVar4) {
    fVar4 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar4;
    if (fVar4 < -1.0) {
      fVar4 = -1.0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar3 = acos((double)fVar4);
    fVar2 = (float)dVar3 * DAT_00b556e8;
  }
  return fVar2;
}


