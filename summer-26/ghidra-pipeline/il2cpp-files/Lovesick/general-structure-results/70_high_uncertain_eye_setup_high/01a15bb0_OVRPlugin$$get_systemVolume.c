/*
FUNCTION_NAME: OVRPlugin$$get_systemVolume
ENTRY_POINT: 01a15bb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_systemVolume(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack000000000000006c;
  
  FUN_019bd9d0();
  lVar1 = *(long *)(unaff_x19 + 0x18);
  if (lVar1 != 0) {
    fVar5 = *(float *)(lVar1 + 0x18);
    fStack000000000000006c = in_stack_00000008;
    fVar6 = *(float *)(lVar1 + 0x10);
    fVar4 = *(float *)(lVar1 + 0x14);
    fVar2 = (float)FUN_01a15d48();
    if (DAT_0377518b == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_0377518b = '\x01';
    }
    fVar3 = param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2;
    fStack0000000000000000 = fStack0000000000000000 - fVar6;
    fStack0000000000000004 = fStack0000000000000004 - fVar4;
    fVar5 = fStack000000000000006c - fVar5;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar3) {
      fVar4 = fVar5 * param_3 + fStack0000000000000000 * fVar2 + fStack0000000000000004 * param_2;
      fStack0000000000000000 = fStack0000000000000000 - (fVar2 * fVar4) / fVar3;
      fStack0000000000000004 = fStack0000000000000004 - (param_2 * fVar4) / fVar3;
      fVar5 = fVar5 - (param_3 * fVar4) / fVar3;
    }
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar2 = SQRT(fVar5 * fVar5 +
                 fStack0000000000000000 * fStack0000000000000000 +
                 fStack0000000000000004 * fStack0000000000000004);
    if (fVar2 <= DAT_028aa038) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      fStack0000000000000000 =
           **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
    }
    else {
      fStack0000000000000000 = fStack0000000000000000 / fVar2;
    }
    return fStack0000000000000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


