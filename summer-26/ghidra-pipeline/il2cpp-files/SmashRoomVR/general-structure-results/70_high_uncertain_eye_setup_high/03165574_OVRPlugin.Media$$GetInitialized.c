/*
FUNCTION_NAME: OVRPlugin.Media$$GetInitialized
ENTRY_POINT: 03165574
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__GetInitialized(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  float *unaff_x19;
  long *unaff_x20;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0x710)) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_031655d4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_031655d4:
  (*(code *)*puVar3)(&stack0x00000018);
  fVar11 = in_stack_00000018;
  fStack0000000000000014 = fStack0000000000000020;
  fStack000000000000000c = in_stack_00000028._4_4_;
  fVar13 = in_stack_00000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar8 = (float)FUN_039274f8();
  if (DAT_03fed25b == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed25b = '\x01';
  }
  puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar15 = *(float *)(lVar4 + 0x18);
  fVar14 = *(float *)(lVar4 + 0x1c);
  fVar12 = *(float *)(lVar4 + 0x20);
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  fVar9 = fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar9) {
    fVar10 = param_3 * fVar12 + fVar8 * fVar15 + fVar13 * fVar14;
    fVar8 = fVar8 - (fVar15 * fVar10) / fVar9;
    fVar13 = fVar13 - (fVar14 * fVar10) / fVar9;
    param_3 = param_3 - (fVar12 * fVar10) / fVar9;
  }
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar12 = SQRT(param_3 * param_3 + fVar8 * fVar8 + fVar13 * fVar13);
  if (fVar12 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar5;
    fVar13 = pfVar5[1];
    param_3 = pfVar5[2];
  }
  else {
    fVar8 = fVar8 / fVar12;
    fVar13 = fVar13 / fVar12;
    param_3 = param_3 / fVar12;
  }
  fVar12 = fStack0000000000000024 * fStack0000000000000024 +
           fStack000000000000000c * fStack000000000000000c;
  fVar14 = unaff_x19[1] - unaff_x19[1];
  fVar11 = fVar11 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar15 = (fVar14 * fVar14 + fVar11 * fVar11 + fStack0000000000000014 * fStack0000000000000014) -
           fVar12;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (unaff_s14 < fVar15) {
    bVar2 = false;
  }
  else {
    fVar9 = param_3 * fVar14 - fVar13 * fStack0000000000000014;
    fVar15 = fVar8 * fStack0000000000000014 - param_3 * fVar11;
    fVar11 = fVar13 * fVar11 - fVar8 * fVar14;
    bVar2 = fVar11 * fVar11 + fVar9 * fVar9 + fVar15 * fVar15 <= fVar12;
  }
  return bVar2;
}


