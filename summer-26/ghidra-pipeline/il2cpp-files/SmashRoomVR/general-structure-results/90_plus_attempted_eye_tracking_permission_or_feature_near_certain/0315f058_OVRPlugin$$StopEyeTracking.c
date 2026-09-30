/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 0315f058
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin__StopEyeTracking(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  char cVar11;
  float *pfVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s8;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack0000000000000004;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  lVar10 = FUN_0391c27c(param_1,0);
  if (lVar10 == 0) goto LAB_0315f994;
  uVar20 = unaff_x21[1];
  fVar22 = (float)unaff_x21[2];
  fVar13 = (float)FUN_0392a520(*unaff_x21,lVar10,0);
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (lVar10 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar10 == 0)) goto LAB_0315f994;
  fVar21 = (float)unaff_x21[4];
  fVar23 = (float)unaff_x21[5];
  fVar14 = (float)FUN_0392a298(unaff_x21[3],lVar10,0);
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  puVar5 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  fVar3 = DAT_00b55370;
  fVar15 = SQRT(fVar23 * fVar23 + fVar14 * fVar14 + fVar21 * fVar21);
  fStack0000000000000004 = unaff_s8;
  if (fVar15 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar14 = *pfVar12;
    fVar21 = pfVar12[1];
    fVar23 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fVar21 = fVar21 / fVar15;
    fVar23 = fVar23 / fVar15;
  }
  fStack0000000000000018 = fVar13;
  uStack000000000000001c = uVar20;
  fStack0000000000000020 = fVar22;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar15 = SQRT(fVar23 * fVar23 + fVar14 * fVar14 + fVar21 * fVar21);
  if (fVar15 <= fVar3) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar14 = *pfVar12;
    fStack0000000000000028 = pfVar12[1];
    fVar23 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fStack0000000000000028 = fVar21 / fVar15;
    fVar23 = fVar23 / fVar15;
  }
  fStack0000000000000024 = fVar14;
  fStack000000000000002c = fVar23;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar21 = SQRT(fVar14 * fVar14 + 0.0 + fVar23 * fVar23);
  if (fVar21 <= fVar3) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar14 = *pfVar12;
    fVar15 = pfVar12[1];
    fVar23 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar21;
    fVar15 = 0.0 / fVar21;
    fVar23 = fVar23 / fVar21;
  }
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar16 = SQRT(fVar23 * fVar23 + fVar14 * fVar14 + fVar15 * fVar15);
  if (fVar16 <= fVar3) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar14 = *pfVar12;
    fVar15 = pfVar12[1];
    fVar23 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar16;
    fVar15 = fVar15 / fVar16;
    fVar23 = fVar23 / fVar16;
  }
  if (DAT_03fed5da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed5da = '\x01';
  }
  puVar6 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  fVar16 = fVar23 * fVar23 + fVar14 * fVar14 + fVar15 * fVar15;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar16) {
    fVar27 = (fVar15 * -0.0 - fVar13 * fVar14) - fVar22 * fVar23;
    fVar25 = (fVar14 * fVar27) / fVar16;
    fVar26 = (fVar15 * fVar27) / fVar16;
    fVar16 = (fVar23 * fVar27) / fVar16;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar25 = *pfVar12;
    fVar26 = pfVar12[1];
    fVar16 = pfVar12[2];
  }
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if ((*(int *)(*(long *)puVar5 + 0xe0) == 0) && (thunk_FUN_01ac7298(), DAT_03fed25d == '\0')) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar25 = fVar13 + fVar25;
  fVar26 = fVar26 + 0.0;
  fVar29 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar16 = fVar22 + fVar16;
  fVar28 = SQRT(fVar13 * fVar13 + 0.0 + fVar22 * fVar22);
  fVar27 = SQRT(fVar16 * fVar16 + fVar25 * fVar25 + fVar26 * fVar26);
  bVar7 = false;
  bVar8 = false;
  bVar9 = false;
  if (iVar1 == 0) {
    bVar7 = false;
    bVar8 = false;
    bVar9 = true;
    if (!NAN(fVar28) && !NAN(fVar29)) {
      bVar7 = fVar28 < fVar29;
      bVar8 = fVar28 == fVar29;
      bVar9 = false;
    }
  }
  if (bVar8 || bVar7 != bVar9) {
    iVar1 = 1;
  }
  if (fVar29 < fVar27) {
    return 0;
  }
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar17 = ABS(fVar21);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar24 = **(float **)(*(long *)puVar6 + 0xb8) * 8.0;
  fVar2 = fVar17 * DAT_00b55490;
  if (fVar17 * DAT_00b55490 <= fVar24) {
    fVar2 = fVar24;
  }
  if (ABS(0.0 - fVar21) < fVar2) {
    return 0;
  }
  if (fVar28 <= fVar29) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar15 * -0.0 - fVar13 * fVar14) - fVar22 * fVar23 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  fVar28 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar27 = SQRT(fVar28 * fVar28 - fVar27 * fVar27);
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar17 = fVar13 - (fVar25 - fVar14 * fVar27);
  fVar29 = (fVar15 * fVar27 - fVar26) + 0.0;
  fVar28 = fVar22 - (fVar16 - fVar23 * fVar27);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    cVar11 = DAT_03fed25e;
  }
  else {
    cVar11 = '\x01';
  }
  fVar28 = fVar28 * fVar28;
  fVar29 = fVar28 + fVar17 * fVar17 + fVar29 * fVar29;
  if (cVar11 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar13 = fVar13 - (fVar25 + fVar14 * fVar27);
  fVar14 = 0.0 - (fVar26 + fVar15 * fVar27);
  fVar15 = SQRT(fVar29) / fVar21;
  fVar22 = fVar22 - (fVar16 + fVar23 * fVar27);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar22 = fVar22 * fVar22;
  fVar21 = SQRT(fVar22 + fVar13 * fVar13 + fVar14 * fVar14) / fVar21;
  uVar18 = FUN_038f7ac0(fVar15,&stack0x00000018,0);
  fVar13 = fVar28;
  fVar14 = fVar22;
  uVar19 = FUN_038f7ac0(fVar21,&stack0x00000018,0);
  if ((fStack0000000000000004 <= 0.0) ||
     (fVar23 = (float)FUN_0315efb8(fVar15), fVar23 <= fStack0000000000000004)) {
    fVar23 = *(float *)(unaff_x20 + 0x2c);
    bVar7 = fVar23 <= 0.0 || ABS(fVar22) <= fVar23 * 0.5;
    if (0.0 < fStack0000000000000004) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar7 & iVar1 != 1)) {
      if ((0.0 < fVar23) && (fVar23 * 0.5 < ABS(fVar14))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar10 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar10 != 0)) {
        fVar22 = fVar13;
        uVar20 = FUN_03927438(uVar19,lVar10,0);
        *unaff_x19 = uVar20;
        unaff_x19[1] = fVar14;
        unaff_x19[2] = fVar22;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
        lVar10 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar14 = (float)uVar19;
        fVar22 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + 0.0);
        if (fVar22 <= fVar3) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
          fVar14 = *pfVar12;
          fVar23 = pfVar12[1];
          fVar22 = pfVar12[2];
        }
        else {
          fVar23 = 0.0 / fVar22;
          fVar14 = -fVar14 / fVar22;
          fVar22 = -fVar13 / fVar22;
        }
        if (lVar10 == 0) goto LAB_0315f994;
        uVar20 = FUN_03929a40(fVar14,lVar10,0);
        unaff_x19[3] = uVar20;
        unaff_x19[4] = fVar23;
        unaff_x19[5] = fVar22;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar7 = false;
LAB_0315f70c:
    fVar23 = (float)FUN_0315efb8(fVar21);
    if (fVar23 <= fStack0000000000000004) {
      fVar23 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar7 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar10 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar10 != 0)) {
    fVar13 = fVar28;
    uVar20 = FUN_03927438(uVar18,lVar10,0);
    *unaff_x19 = uVar20;
    unaff_x19[1] = fVar22;
    unaff_x19[2] = fVar13;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar10 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar13 = (float)uVar18;
      fVar22 = SQRT(fVar28 * fVar28 + fVar13 * fVar13 + 0.0);
      if (fVar22 <= fVar3) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
        fVar13 = *pfVar12;
        fVar14 = pfVar12[1];
        fVar28 = pfVar12[2];
      }
      else {
        fVar13 = fVar13 / fVar22;
        fVar14 = 0.0 / fVar22;
        fVar28 = fVar28 / fVar22;
      }
      if (lVar10 != 0) {
        uVar20 = FUN_03929a40(fVar13,lVar10,0);
        unaff_x19[3] = uVar20;
        unaff_x19[4] = fVar14;
        unaff_x19[5] = fVar28;
        fVar21 = fVar15;
LAB_0315f838:
        uVar20 = FUN_0315efb8(fVar21);
        unaff_x19[6] = uVar20;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


