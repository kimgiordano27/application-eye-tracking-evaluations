/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 031601dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SaveSpace(float param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar1;
  float *pfVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  float fStack000000000000000c;
  
  fStack000000000000000c = unaff_s9;
  if (in_ZR || in_NG != in_OV) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar11 = *pfVar2;
    fVar10 = pfVar2[1];
    param_1 = pfVar2[2];
  }
  else {
    fVar11 = unaff_s14 / param_1;
    fVar10 = unaff_s13 / param_1;
    param_1 = unaff_s12 / param_1;
  }
  fVar12 = unaff_x20[2];
  fVar7 = *unaff_x20;
  fVar8 = unaff_x20[1];
  fVar9 = param_1 * unaff_x20[5] + fVar11 * unaff_x20[3] + fVar10 * unaff_x20[4];
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar5 = ABS(fVar9);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar6 = **(float **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) *
          8.0;
  fVar3 = fVar5 * DAT_00b55490;
  if (fVar5 * DAT_00b55490 <= fVar6) {
    fVar3 = fVar6;
  }
  if (fVar3 <= ABS(0.0 - fVar9)) {
    fVar7 = fVar11 * fVar7;
    fVar9 = ((fStack000000000000000c * param_1 + unaff_s11 * fVar11 + in_stack_00000008 * fVar10) -
            (param_1 * fVar12 + fVar7 + fVar10 * fVar8)) / fVar9;
    uVar1 = 0;
    if ((0.0 < fVar9) && (fVar9 <= in_stack_00000000._4_4_)) {
      uVar4 = FUN_038f7ac0();
      uVar1 = 1;
      *unaff_x19 = uVar4;
      unaff_x19[1] = in_stack_00000000._4_4_;
      unaff_x19[2] = fVar7;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


