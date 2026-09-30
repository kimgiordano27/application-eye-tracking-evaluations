/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 031647e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState5___ctor
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  puVar2 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  fVar4 = (float)FUN_03929130(param_4,0);
  fVar9 = param_2;
  fVar11 = param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack000000000000001c = (float)FUN_039274f8();
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  fVar5 = param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2;
  fVar14 = fVar9;
  fVar10 = fVar11;
  fVar12 = fStack000000000000001c;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar5) {
    fVar10 = param_3 * fVar11 + fVar4 * fStack000000000000001c + param_2 * fVar9;
    fVar12 = fStack000000000000001c - (fVar4 * fVar10) / fVar5;
    fVar14 = fVar9 - (param_2 * fVar10) / fVar5;
    fVar10 = fVar11 - (param_3 * fVar10) / fVar5;
  }
  fStack0000000000000014 = fVar11;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar11 = DAT_00b55370;
  fVar5 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar5 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fStack000000000000006c = *pfVar3;
    fVar14 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fStack000000000000006c = fVar12 / fVar5;
    fVar14 = fVar14 / fVar5;
    fVar10 = fVar10 / fVar5;
  }
  fVar12 = param_3 * fStack000000000000006c;
  fVar5 = param_2 * fStack000000000000006c;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  fVar13 = param_3 * fVar14 - param_2 * fVar10;
  fVar12 = fVar4 * fVar10 - fVar12;
  fVar5 = fVar5 - fVar4 * fVar14;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar4 = fStack000000000000006c;
  fVar5 = SQRT(fVar5 * fVar5 + fVar13 * fVar13 + fVar12 * fVar12);
  if (fVar5 <= fVar11) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    fVar13 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar12 = (*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8))[1];
  }
  else {
    fVar13 = fVar13 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  fStack0000000000000004 = fVar12;
  FUN_01bf693c(fVar4,fVar14,fVar10,fStack000000000000001c,fVar9,fStack0000000000000014,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_038ee05c(*(long *)(unaff_x20 + 0x40),0);
    FUN_03914748(0);
    uVar8 = FUN_03914a7c(0);
    if (fVar12 * fVar12 + (float)uVar8 * (float)uVar8 + fVar13 * fVar13 != 0.0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_039275d8();
      uVar7 = FUN_03914800(uVar8,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar7;
      *(float *)(unaff_x19 + 0x10) = fVar13;
      *(float *)(unaff_x19 + 0x14) = fVar12;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


