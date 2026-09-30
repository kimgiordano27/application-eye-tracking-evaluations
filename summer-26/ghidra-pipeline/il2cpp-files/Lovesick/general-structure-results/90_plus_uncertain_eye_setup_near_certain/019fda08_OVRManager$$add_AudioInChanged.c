/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 019fda08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged(float param_1,undefined1 param_2 [16],float param_3)

{
  float fVar1;
  int in_w8;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float fVar8;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar8 = *(float *)(unaff_x20 + 8);
  fVar7 = 1.0;
  fStack0000000000000008 = 1.0;
  if (param_1 < 0.0) {
    fStack0000000000000008 = -1.0;
  }
  if (in_w8 == 0) {
    fVar7 = 1.0;
    thunk_FUN_00d32864();
  }
  fVar4 = (float)FUN_02666efc();
  if (DAT_03777c7d == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_03777c7d = '\x01';
  }
  fVar1 = fStack0000000000000008;
  fVar5 = param_3 * param_3 + fVar4 * fVar4 + fVar7 * fVar7;
  in_stack_00000000._4_4_ = in_stack_00000000._4_4_ - fVar8;
  fVar8 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8);
  if (fVar8 <= fVar5) {
    fVar6 = in_stack_00000000._4_4_ * param_3 +
            (unaff_s14 - unaff_s12) * fVar4 + (unaff_s15 - unaff_s11) * fVar7;
    fVar8 = fVar4 * fVar6;
    fVar4 = fVar8 / fVar5;
    fVar7 = (fVar7 * fVar6) / fVar5;
    fVar5 = (param_3 * fVar6) / fVar5;
  }
  else {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar2 = *(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    fVar4 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = fVar5 * fVar5;
  fVar4 = fVar4 * fVar4 + fVar7 * fVar7 + fVar5;
  fVar6 = (float)FUN_02666efc();
  fVar7 = 1.0;
  if (in_stack_00000000._4_4_ * fVar8 +
      (unaff_s14 - unaff_s12) * fVar6 + (unaff_s15 - unaff_s11) * fVar5 < 0.0) {
    fVar7 = -1.0;
  }
  fVar7 = SQRT(fVar4) * fVar7;
  fVar8 = 1.0;
  if (fVar7 < 0.0) {
    fVar8 = -1.0;
  }
  *(float *)(unaff_x19 + 0x158) = fVar7;
  if (fVar1 != fVar8) {
    lVar3 = *(long *)(unaff_x19 + 0x160);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fStack000000000000000c = fVar1;
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),&stack0x0000000c,*(undefined8 *)(lVar3 + 0x28));
  }
  return;
}


