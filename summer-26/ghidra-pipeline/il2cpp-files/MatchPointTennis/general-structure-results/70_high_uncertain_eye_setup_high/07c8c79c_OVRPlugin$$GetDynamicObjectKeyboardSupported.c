/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectKeyboardSupported
ENTRY_POINT: 07c8c79c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetDynamicObjectKeyboardSupported
                (float *param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                undefined1 param_5 [16],float param_6)

{
  float *pfVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  float in_stack_00000030;
  
  fVar5 = unaff_s12 * unaff_s12 + param_6 * param_6 + param_3;
  if (*param_1 <= fVar5) {
    fVar4 = unaff_s12 * ((in_stack_00000008._4_4_ + unaff_s11) - unaff_s14) +
            param_6 * (unaff_s9 - in_stack_00000020._4_4_) + unaff_s13 * (unaff_s10 - unaff_s15);
    fVar2 = (param_6 * fVar4) / fVar5;
    fVar3 = (unaff_s13 * fVar4) / fVar5;
    fVar4 = (unaff_s12 * fVar4) / fVar5;
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    param_6 = in_stack_00000030;
  }
                    /* try { // try from 07c8c838 to 07d8cac3 has its CatchHandler @ 07c8c838
                       catch() { ... } // from try @ 07c8c838 with catch @ 07c8c838
                       catch() { ... } // from try @ 07c8cbb8 with catch @ 07c8c838
                       catch() { ... } // from try @ 07c8ccd4 with catch @ 07c8c838
                       catch() { ... } // from try @ 07c8cd88 with catch @ 07c8c838 */
  if (0.0 <= unaff_s12 * fVar4 + param_6 * fVar2 + unaff_s13 * fVar3) {
    if (fVar5 < fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) {
      fVar2 = in_stack_00000030;
      fVar3 = unaff_s13;
      fVar4 = unaff_s12;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fVar6 = unaff_s9 - (in_stack_00000020._4_4_ + fVar2);
  fVar2 = unaff_s10 - (unaff_s15 + fVar3);
  fVar5 = (in_stack_00000008._4_4_ + unaff_s11) - (unaff_s14 + fVar4);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar6 * fVar6);
}


