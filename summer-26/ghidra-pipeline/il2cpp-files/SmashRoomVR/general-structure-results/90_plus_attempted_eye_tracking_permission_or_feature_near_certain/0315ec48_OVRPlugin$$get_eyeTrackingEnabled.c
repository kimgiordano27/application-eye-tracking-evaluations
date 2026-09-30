/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 0315ec48
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_eyeTrackingEnabled(long param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  float unaff_s15;
  float fVar12;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  param_3 = param_3 + param_2;
  if (**(float **)(param_1 + 0xb8) <= param_3) {
    fVar4 = unaff_s12 * unaff_s10 + unaff_s15 * unaff_s13 + unaff_s8 * unaff_s11;
    fStack0000000000000014 = (unaff_s13 * fVar4) / param_3;
    fVar8 = (unaff_s11 * fVar4) / param_3;
    fStack000000000000000c = (unaff_s10 * fVar4) / param_3;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fStack0000000000000014 = *pfVar2;
    fVar8 = pfVar2[1];
    fStack000000000000000c = pfVar2[2];
  }
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar9 = unaff_s15 - fStack0000000000000014;
  fStack0000000000000018 = unaff_s8 - fVar8;
  fVar11 = unaff_s12 - fStack000000000000000c;
  fVar4 = fVar11 * fVar11 + fVar9 * fVar9 + fStack0000000000000018 * fStack0000000000000018;
  fVar10 = SQRT(fVar4);
  if (DAT_00b55084 <= fVar4) {
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (fVar10 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fStack000000000000001c = *pfVar2;
      fStack0000000000000018 = pfVar2[1];
      fVar11 = pfVar2[2];
    }
    else {
      fStack000000000000001c = fVar9 / fVar10;
      fStack0000000000000018 = fStack0000000000000018 / fVar10;
      fVar11 = fVar11 / fVar10;
    }
  }
  else {
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar3 = *(long *)(*unaff_x21 + 0xb8);
    fStack000000000000001c = *(float *)(lVar3 + 0x48);
    fStack0000000000000018 = *(float *)(lVar3 + 0x4c);
    fVar11 = *(float *)(lVar3 + 0x50);
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack0000000000000004 = fVar10;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar10 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fVar9 = fStack0000000000000014 + fStack000000000000001c * fVar10;
    fVar4 = fStack000000000000000c + fVar11 * fVar10;
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    fVar9 = unaff_s15 - fVar9;
    in_stack_00000008 = in_stack_00000008 - (fVar8 + fStack0000000000000018 * fVar10);
    fVar4 = unaff_s12 - fVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar4 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + in_stack_00000008 * in_stack_00000008);
    if ((0.0 < unaff_s9) && (fVar9 = (float)FUN_0315efb8(fVar4), unaff_s9 < fVar9)) {
      return 0;
    }
    fVar9 = fStack000000000000001c;
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar12 = fStack000000000000001c, fVar7 = fVar11, fVar6 = fStack0000000000000018,
        *(int *)(unaff_x20 + 0x28) != 2 && (fStack0000000000000004 <= fVar10)))) {
      fVar12 = -fStack000000000000001c;
      fVar7 = -fVar11;
      fVar6 = -fStack0000000000000018;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar3 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar3 != 0)) {
        fVar10 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fVar11 = fStack000000000000000c + fVar11 * fVar10;
        fVar8 = fVar8 + fStack0000000000000018 * fVar10;
        uVar5 = FUN_03927438(fStack0000000000000014 + fVar9 * fVar10,lVar3,0);
        *unaff_x19 = uVar5;
        unaff_x19[1] = fVar8;
        unaff_x19[2] = fVar11;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar3 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar3 != 0)) {
          uVar5 = FUN_03929a40(fVar12,lVar3,0);
          unaff_x19[3] = uVar5;
          unaff_x19[4] = fVar6;
          unaff_x19[5] = fVar7;
          uVar5 = FUN_0315efb8(fVar4);
          unaff_x19[6] = uVar5;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


