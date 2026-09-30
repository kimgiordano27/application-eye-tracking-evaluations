/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 01a16190
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetTrackerFrustum(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack000000000000006c;
  
  fVar4 = param_2;
  fVar5 = param_3;
  FUN_01a159b4();
  fStack000000000000006c = fStack0000000000000000;
  fVar2 = (float)FUN_01a1631c();
  if (DAT_03777c7d == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_03777c7d = '\x01';
  }
  fVar6 = fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar6) {
    fVar3 = (in_stack_00000008 - param_3) * fVar5 +
            (fStack000000000000006c - param_1) * fVar2 + (fStack0000000000000004 - param_2) * fVar4;
    fVar2 = (fVar2 * fVar3) / fVar6;
    fVar4 = (fVar4 * fVar3) / fVar6;
    fVar6 = (fVar5 * fVar3) / fVar6;
  }
  else {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    fVar2 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  fStack0000000000000004 = (param_2 + fVar4) - fStack0000000000000004;
  fVar4 = (param_1 + fVar2) - fStack000000000000006c;
  in_stack_00000008 = (param_3 + fVar6) - in_stack_00000008;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT(in_stack_00000008 * in_stack_00000008 +
              fVar4 * fVar4 + fStack0000000000000004 * fStack0000000000000004);
}


