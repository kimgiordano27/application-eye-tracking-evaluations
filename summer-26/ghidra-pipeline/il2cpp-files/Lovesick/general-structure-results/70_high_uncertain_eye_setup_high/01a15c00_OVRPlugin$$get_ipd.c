/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 01a15c00
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


float OVRPlugin__get_ipd(void)

{
  undefined1 in_w8;
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar3;
  float unaff_s12;
  float fVar4;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  *(undefined1 *)(unaff_x19 + 0x18b) = in_w8;
  fVar1 = unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8;
  fVar3 = unaff_s11 - unaff_s15;
  fVar4 = unaff_s12 - unaff_s13;
  in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - unaff_s14;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar1) {
    fVar2 = in_stack_00000068._4_4_ * unaff_s9 + fVar3 * unaff_s10 + fVar4 * unaff_s8;
    fVar3 = fVar3 - (unaff_s10 * fVar2) / fVar1;
    fVar4 = fVar4 - (unaff_s8 * fVar2) / fVar1;
    in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - (unaff_s9 * fVar2) / fVar1;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar1 = SQRT(in_stack_00000068._4_4_ * in_stack_00000068._4_4_ + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar1 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    fVar3 = **(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
  }
  else {
    fVar3 = fVar3 / fVar1;
  }
  return fVar3;
}


