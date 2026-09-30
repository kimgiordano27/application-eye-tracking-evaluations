/*
FUNCTION_NAME: OVRPlugin$$ShowUI
ENTRY_POINT: 01a161e8
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


float OVRPlugin__ShowUI(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  fVar4 = unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar4) {
    fVar5 = (unaff_s15 - unaff_s10) * unaff_s13 +
            (in_stack_00000068._4_4_ - unaff_s8) * unaff_s12 + (unaff_s14 - unaff_s9) * unaff_s11;
    fVar2 = (unaff_s12 * fVar5) / fVar4;
    fVar3 = (unaff_s11 * fVar5) / fVar4;
    fVar4 = (unaff_s13 * fVar5) / fVar4;
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
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  fVar5 = (unaff_s9 + fVar3) - unaff_s14;
  in_stack_00000068._4_4_ = (unaff_s8 + fVar2) - in_stack_00000068._4_4_;
  fVar4 = (unaff_s10 + fVar4) - unaff_s15;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT(fVar4 * fVar4 + in_stack_00000068._4_4_ * in_stack_00000068._4_4_ + fVar5 * fVar5);
}


