/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateRaw
ENTRY_POINT: 031515b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03151664) */

float OVRPlugin__GetNodePoseStateRaw(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  if (DAT_03fed315 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed315 = '\x01';
  }
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar4 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) *
               (param_3 * param_3 + param_1 * param_1 + param_2 * param_2));
  fVar2 = 0.0;
  if (DAT_00b55154 <= fVar4) {
    fVar4 = (unaff_s8 * param_3 + unaff_s9 * param_1 + unaff_s10 * param_2) / fVar4;
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


