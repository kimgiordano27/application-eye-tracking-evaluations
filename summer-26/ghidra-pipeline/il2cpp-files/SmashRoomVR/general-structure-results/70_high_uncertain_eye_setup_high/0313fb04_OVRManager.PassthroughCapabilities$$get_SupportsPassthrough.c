/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsPassthrough
ENTRY_POINT: 0313fb04
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


float OVRManager_PassthroughCapabilities__get_SupportsPassthrough(void)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s15;
  float fStack000000000000000c;
  
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar11 = *(float *)(unaff_x19 + 0xfc);
  fVar9 = *(float *)(unaff_x19 + 0x100);
  fVar7 = *(float *)(unaff_x19 + 0x104);
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar7 = fVar7 * fVar7;
  fVar11 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar7);
  fVar9 = **(float **)(*(long *)puVar1 + 0xb8);
  if (fVar9 <= fVar11) {
    fVar4 = (float)FUN_02d0b228(unaff_x19 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    fVar4 = unaff_s15 - fVar4;
    fVar9 = unaff_s10 - fVar9;
    fVar7 = unaff_s9 - fVar7;
    fStack000000000000000c = unaff_s15;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar10 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar9 * fVar9);
    if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar10) {
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      fVar6 = DAT_00b55370;
      if (fVar10 <= DAT_00b55370) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar4 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar7 = pfVar3[2];
      }
      else {
        fVar4 = fVar4 / fVar10;
        fVar9 = fVar9 / fVar10;
        fVar7 = fVar7 / fVar10;
      }
      fVar8 = *(float *)(unaff_x19 + 0xfc);
      fVar12 = *(float *)(unaff_x19 + 0x100);
      fVar13 = *(float *)(unaff_x19 + 0x104);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar5 = SQRT(fVar13 * fVar13 + fVar8 * fVar8 + fVar12 * fVar12);
      if (fVar5 <= fVar6) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar8 = *pfVar3;
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
      }
      else {
        fVar8 = fVar8 / fVar5;
        fVar12 = fVar12 / fVar5;
        fVar13 = fVar13 / fVar5;
      }
      *(float *)(unaff_x19 + 0xa4) = fVar8;
      *(float *)(unaff_x19 + 0xa8) = fVar12;
      *(float *)(unaff_x19 + 0xac) = fVar13;
      *(float *)(unaff_x19 + 0xb0) = fVar10 * fVar4;
      fVar6 = fVar7 * fVar12 - fVar9 * fVar13;
      *(float *)(unaff_x19 + 0xbc) = fVar6;
      *(float *)(unaff_x19 + 0xc0) = fVar4 * fVar13 - fVar7 * fVar8;
      *(float *)(unaff_x19 + 0xc4) = fVar9 * fVar8 - fVar4 * fVar12;
      *(float *)(unaff_x19 + 200) = fStack000000000000000c;
      *(float *)(unaff_x19 + 0xcc) = unaff_s10;
      *(float *)(unaff_x19 + 0xd0) = unaff_s9;
      *(float *)(unaff_x19 + 0xb4) = fVar10 * fVar9;
      *(float *)(unaff_x19 + 0xb8) = fVar10 * fVar7;
      return fVar11 * fVar10 * fVar6;
    }
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  return **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
}


