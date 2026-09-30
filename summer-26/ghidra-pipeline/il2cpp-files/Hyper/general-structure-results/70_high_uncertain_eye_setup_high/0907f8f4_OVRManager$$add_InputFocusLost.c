/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 0907f8f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_InputFocusLost
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5,undefined4 *param_6)

{
  float *unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  *param_6 = 0;
  fStack0000000000000014 = (float)FUN_0a1f8a64();
  fVar7 = param_3;
  fVar5 = param_2;
  fVar1 = (float)FUN_0a1f8a4c();
  fVar6 = fVar5;
  fStack000000000000000c = fVar7;
  fVar2 = (float)FUN_0a1f8a64();
  fVar9 = fVar7;
  fVar4 = fVar6;
  fVar3 = (float)FUN_0a1f8a64();
  fVar9 = unaff_s12 * fVar9 + unaff_s14 * fVar3 + unaff_s13 * fVar4;
  if (DAT_0b31f764 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f764 = '\x01';
  }
  fVar4 = ABS(fVar9);
  if (ABS(fVar9) <= 0.0) {
    fVar4 = 0.0;
  }
  fVar8 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) * 8.0;
  fVar3 = fVar4 * DAT_01df4f4c;
  if (fVar4 * DAT_01df4f4c <= fVar8) {
    fVar3 = fVar8;
  }
  if (fVar3 <= ABS(0.0 - fVar9)) {
    *unaff_x19 = ((param_3 * fStack000000000000000c +
                  fStack0000000000000014 * fVar1 + param_2 * fVar5) -
                 (fStack000000000000006c * fVar7 +
                 in_stack_00000018._4_4_ * fVar2 + fStack0000000000000068 * fVar6)) / fVar9;
  }
  return fVar3 <= ABS(0.0 - fVar9);
}


