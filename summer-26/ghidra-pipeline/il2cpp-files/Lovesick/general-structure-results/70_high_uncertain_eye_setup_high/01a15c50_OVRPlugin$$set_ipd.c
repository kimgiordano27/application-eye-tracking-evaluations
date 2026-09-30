/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 01a15c50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__set_ipd(float param_1,float param_2,float param_3,float param_4)

{
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar1;
  float unaff_s12;
  float fVar2;
  float unaff_s13;
  float fVar3;
  
  param_4 = param_4 + param_2 + param_3;
  fVar1 = unaff_s11 - (unaff_s10 * param_4) / param_1;
  fVar2 = unaff_s12 - (unaff_s8 * param_4) / param_1;
  fVar3 = unaff_s13 - (unaff_s9 * param_4) / param_1;
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar2 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    fVar1 = **(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
  }
  else {
    fVar1 = fVar1 / fVar2;
  }
  return fVar1;
}


