/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__418_0
ENTRY_POINT: 0313fb8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


float OVRManager_<>c__<InitOVRManager>b__418_0(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000000c;
  
  if (*(char *)(unaff_x22 + 0x25c) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x22 + 0x25c) = 1;
  }
  param_1 = unaff_s15 - param_1;
  param_2 = unaff_s10 - param_2;
  param_3 = unaff_s9 - param_3;
  fStack000000000000000c = unaff_s15;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar6 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (**(float **)(*unaff_x21 + 0xb8) <= fVar6) {
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fVar3 = DAT_00b55370;
    if (fVar6 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
      param_1 = *pfVar2;
      param_2 = pfVar2[1];
      param_3 = pfVar2[2];
    }
    else {
      param_1 = param_1 / fVar6;
      param_2 = param_2 / fVar6;
      param_3 = param_3 / fVar6;
    }
    fVar5 = *(float *)(unaff_x19 + 0xfc);
    fVar7 = *(float *)(unaff_x19 + 0x100);
    fVar8 = *(float *)(unaff_x19 + 0x104);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar4 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
    if (fVar4 <= fVar3) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar5 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
    }
    else {
      fVar5 = fVar5 / fVar4;
      fVar7 = fVar7 / fVar4;
      fVar8 = fVar8 / fVar4;
    }
    *(float *)(unaff_x19 + 0xa4) = fVar5;
    *(float *)(unaff_x19 + 0xa8) = fVar7;
    *(float *)(unaff_x19 + 0xac) = fVar8;
    *(float *)(unaff_x19 + 0xb0) = fVar6 * param_1;
    fVar3 = param_3 * fVar7 - param_2 * fVar8;
    *(float *)(unaff_x19 + 0xbc) = fVar3;
    *(float *)(unaff_x19 + 0xc0) = param_1 * fVar8 - param_3 * fVar5;
    *(float *)(unaff_x19 + 0xc4) = param_2 * fVar5 - param_1 * fVar7;
    *(float *)(unaff_x19 + 200) = fStack000000000000000c;
    fVar3 = unaff_s14 * fVar6 * fVar3;
    *(float *)(unaff_x19 + 0xcc) = unaff_s10;
    *(float *)(unaff_x19 + 0xd0) = unaff_s9;
    *(float *)(unaff_x19 + 0xb4) = fVar6 * param_2;
    *(float *)(unaff_x19 + 0xb8) = fVar6 * param_3;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    fVar3 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  }
  return fVar3;
}


