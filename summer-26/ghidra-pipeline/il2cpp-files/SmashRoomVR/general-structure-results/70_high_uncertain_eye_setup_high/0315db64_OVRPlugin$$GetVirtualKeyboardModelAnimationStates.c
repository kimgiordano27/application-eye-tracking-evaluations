/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 0315db64
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


bool OVRPlugin__GetVirtualKeyboardModelAnimationStates
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  param_7[6] = 0.0;
  param_7[4] = 0.0;
  param_7[5] = 0.0;
  fVar1 = (float)FUN_03160830();
  param_4 = param_4 + param_3 * param_6[2] + *param_6 * fVar1 + param_6[1] * param_2;
  if (param_1 <= 0.0 || ABS(param_4) <= param_1) {
    fVar6 = fVar1 * param_4;
    fVar4 = param_6[1] - param_2 * param_4;
    fVar5 = param_6[2] - param_3 * param_4;
    *param_7 = *param_6 - fVar6;
    param_7[1] = fVar4;
    param_7[2] = fVar5;
    fVar7 = *param_6;
    fVar8 = param_6[1];
    fVar9 = param_6[2];
    fVar2 = (float)FUN_03160830(param_5);
    fVar3 = param_4;
    if (fVar6 + fVar9 * fVar5 + fVar7 * fVar2 + fVar8 * fVar4 <= 0.0) {
      fVar3 = -param_4;
    }
    param_7[3] = fVar1;
    param_7[4] = param_2;
    param_7[5] = param_3;
    param_7[6] = fVar3;
  }
  return param_1 <= 0.0 || ABS(param_4) <= param_1;
}


