/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 03164870
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


void OVRPlugin_ControllerState4___ctor(float *param_1,float param_2)

{
  undefined *puVar1;
  float fVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  float fVar12;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack000000000000006c;
  
  if (*param_1 <= param_2) {
    fVar8 = unaff_s13 * unaff_s10 + unaff_s12 * unaff_s8 + unaff_s11 * unaff_s15;
    unaff_s8 = unaff_s8 - (unaff_s12 * fVar8) / param_2;
    unaff_s15 = unaff_s15 - (unaff_s11 * fVar8) / param_2;
    unaff_s10 = unaff_s10 - (unaff_s13 * fVar8) / param_2;
  }
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar8 = DAT_00b55370;
  fVar4 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s15 * unaff_s15);
  if (fVar4 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fStack000000000000006c = *pfVar3;
    fVar9 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    fStack000000000000006c = unaff_s8 / fVar4;
    fVar9 = unaff_s15 / fVar4;
    fVar4 = unaff_s10 / fVar4;
  }
  fVar11 = unaff_s13 * fStack000000000000006c;
  fVar12 = unaff_s11 * fStack000000000000006c;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  fVar10 = unaff_s13 * fVar9 - unaff_s11 * fVar4;
  fVar11 = unaff_s12 * fVar4 - fVar11;
  fVar12 = fVar12 - unaff_s12 * fVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar2 = fStack000000000000006c;
  fVar12 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar12 <= fVar8) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    fVar10 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar11 = (*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8))[1];
  }
  else {
    fVar10 = fVar10 / fVar12;
    fVar11 = fVar11 / fVar12;
  }
  fStack0000000000000004 = fVar11;
  FUN_01bf693c(fVar2,fVar9,fVar4,uStack000000000000001c,uStack0000000000000018,
               in_stack_00000010._4_4_,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_038ee05c(*(long *)(unaff_x20 + 0x40),0);
    FUN_03914748(0);
    uVar7 = FUN_03914a7c(0);
    if (fVar11 * fVar11 + (float)uVar7 * (float)uVar7 + fVar10 * fVar10 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_039275d8();
      uVar6 = FUN_03914800(uVar7,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar6;
      *(float *)(unaff_x19 + 0x10) = fVar10;
      *(float *)(unaff_x19 + 0x14) = fVar11;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


