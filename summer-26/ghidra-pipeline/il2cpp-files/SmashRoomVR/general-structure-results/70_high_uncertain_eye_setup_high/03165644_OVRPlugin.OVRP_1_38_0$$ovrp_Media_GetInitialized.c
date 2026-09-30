/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetInitialized
ENTRY_POINT: 03165644
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_GetInitialized(void)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float *unaff_x19;
  long unaff_x20;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  plVar4 = *(long **)(unaff_x20 + 0x110);
  lVar2 = *(long *)(*plVar4 + 0xb8);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar2 + 0x1c);
  fVar9 = *(float *)(lVar2 + 0x20);
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  fVar5 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar5) {
    fVar6 = unaff_s11 * fVar9 + unaff_s9 * fVar11 + unaff_s10 * fVar10;
    unaff_s9 = unaff_s9 - (fVar11 * fVar6) / fVar5;
    unaff_s10 = unaff_s10 - (fVar10 * fVar6) / fVar5;
    unaff_s11 = unaff_s11 - (fVar9 * fVar6) / fVar5;
  }
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar9 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar9 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar3 = *(float **)(*plVar4 + 0xb8);
    fVar10 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar10 = unaff_s9 / fVar9;
    fVar11 = unaff_s10 / fVar9;
    fVar9 = unaff_s11 / fVar9;
  }
  fVar5 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar6 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar8 = (fVar6 * fVar6 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar5;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (unaff_s14 < fVar8) {
    bVar1 = false;
  }
  else {
    fVar7 = fVar9 * fVar6 - fVar11 * fStack0000000000000014;
    fVar8 = fVar10 * fStack0000000000000014 - fVar9 * fStack0000000000000010;
    fVar9 = fVar11 * fStack0000000000000010 - fVar10 * fVar6;
    bVar1 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 <= fVar5;
  }
  return bVar1;
}


