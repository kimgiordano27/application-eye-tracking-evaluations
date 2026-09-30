/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 0315f118
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StartFaceTracking(float param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  char in_NG;
  bool bVar4;
  bool in_ZR;
  bool bVar5;
  char in_OV;
  bool bVar6;
  long lVar7;
  char cVar8;
  float *pfVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  undefined4 in_stack_00000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  fStack0000000000000004 = unaff_s8;
  if (in_ZR || in_NG != in_OV) {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar19 = pfVar9[1];
    param_1 = pfVar9[2];
  }
  else {
    fVar17 = unaff_s12 / param_1;
    fVar19 = unaff_s13 / param_1;
    param_1 = unaff_s14 / param_1;
  }
  in_stack_00000018 = fStack0000000000000010;
  if (*(char *)(unaff_x24 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar15 = SQRT(param_1 * param_1 + fVar17 * fVar17 + fVar19 * fVar19);
  if (fVar15 <= unaff_s15) {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    in_stack_00000028 = pfVar9[1];
    param_1 = pfVar9[2];
  }
  else {
    fVar17 = fVar17 / fVar15;
    in_stack_00000028 = fVar19 / fVar15;
    param_1 = param_1 / fVar15;
  }
  fStack0000000000000024 = fVar17;
  fStack000000000000002c = param_1;
  if (*(char *)(unaff_x24 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar19 = SQRT(fVar17 * fVar17 + 0.0 + param_1 * param_1);
  if (fVar19 <= unaff_s15) {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar15 = pfVar9[1];
    param_1 = pfVar9[2];
  }
  else {
    fVar17 = fVar17 / fVar19;
    fVar15 = 0.0 / fVar19;
    param_1 = param_1 / fVar19;
  }
  if (*(char *)(unaff_x24 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar10 = SQRT(param_1 * param_1 + fVar17 * fVar17 + fVar15 * fVar15);
  fStack000000000000000c = fVar19;
  if (fVar10 <= unaff_s15) {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar15 = pfVar9[1];
    param_1 = pfVar9[2];
  }
  else {
    fVar17 = fVar17 / fVar10;
    fVar15 = fVar15 / fVar10;
    param_1 = param_1 / fVar10;
  }
  if (DAT_03fed5da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed5da = '\x01';
  }
  puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  fVar19 = param_1 * param_1 + fVar17 * fVar17 + fVar15 * fVar15;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar19) {
    fVar10 = (fVar15 * -0.0 - fStack0000000000000010 * fVar17) - fStack0000000000000014 * param_1;
    fVar18 = (fVar17 * fVar10) / fVar19;
    fVar20 = (fVar15 * fVar10) / fVar19;
    fVar19 = (param_1 * fVar10) / fVar19;
  }
  else {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar18 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar19 = pfVar9[2];
  }
  if (*(char *)(unaff_x24 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  }
  if ((*(int *)(*unaff_x25 + 0xe0) == 0) &&
     (thunk_FUN_01ac7298(), *(char *)(unaff_x24 + 0x25d) == '\0')) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar18 = fStack0000000000000010 + fVar18;
  fVar20 = fVar20 + 0.0;
  fVar22 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar19 = fStack0000000000000014 + fVar19;
  fVar21 = SQRT(fStack0000000000000010 * fStack0000000000000010 + 0.0 +
                fStack0000000000000014 * fStack0000000000000014);
  fVar10 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (iVar1 == 0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar21) && !NAN(fVar22)) {
      bVar4 = fVar21 < fVar22;
      bVar5 = fVar21 == fVar22;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    iVar1 = 1;
  }
  if (fVar22 < fVar10) {
    return 0;
  }
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar11 = ABS(fStack000000000000000c);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar16 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
  fVar2 = fVar11 * DAT_00b55490;
  if (fVar11 * DAT_00b55490 <= fVar16) {
    fVar2 = fVar16;
  }
  if (ABS(0.0 - fStack000000000000000c) < fVar2) {
    return 0;
  }
  if (fVar21 <= fVar22) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar15 * -0.0 - fStack0000000000000010 * fVar17) - fStack0000000000000014 * param_1 <
           0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  fVar21 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar10 = SQRT(fVar21 * fVar21 - fVar10 * fVar10);
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar11 = fStack0000000000000010 - (fVar18 - fVar17 * fVar10);
  fVar22 = (fVar15 * fVar10 - fVar20) + 0.0;
  fVar21 = fStack0000000000000014 - (fVar19 - param_1 * fVar10);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    cVar8 = DAT_03fed25e;
  }
  else {
    cVar8 = '\x01';
  }
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar21 + fVar11 * fVar11 + fVar22 * fVar22;
  if (cVar8 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar11 = fStack000000000000000c;
  fStack0000000000000010 = fStack0000000000000010 - (fVar18 + fVar17 * fVar10);
  fVar17 = 0.0 - (fVar20 + fVar15 * fVar10);
  fVar15 = SQRT(fVar22) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (fVar19 + param_1 * fVar10);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fVar11 = SQRT(fStack0000000000000014 +
                fStack0000000000000010 * fStack0000000000000010 + fVar17 * fVar17) / fVar11;
  uVar13 = FUN_038f7ac0(fVar15,&stack0x00000018,0);
  fVar17 = fVar21;
  fVar19 = fStack0000000000000014;
  uVar14 = FUN_038f7ac0(fVar11,&stack0x00000018,0);
  if ((fStack0000000000000004 <= 0.0) ||
     (fVar10 = (float)FUN_0315efb8(fVar15), fVar10 <= fStack0000000000000004)) {
    fVar10 = *(float *)(unaff_x20 + 0x2c);
    bVar4 = fVar10 <= 0.0 || ABS(fStack0000000000000014) <= fVar10 * 0.5;
    if (0.0 < fStack0000000000000004) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar4 & iVar1 != 1)) {
      if ((0.0 < fVar10) && (fVar10 * 0.5 < ABS(fVar19))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
        fVar15 = fVar17;
        uVar12 = FUN_03927438(uVar14,lVar7,0);
        *unaff_x19 = uVar12;
        unaff_x19[1] = fVar19;
        unaff_x19[2] = fVar15;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
        lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0x25d) == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          *(undefined1 *)(unaff_x24 + 0x25d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar15 = (float)uVar14;
        fVar19 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + 0.0);
        if (fVar19 <= unaff_s15) {
          if (*(char *)(unaff_x23 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x23 + 599) = 1;
          }
          pfVar9 = *(float **)(*unaff_x22 + 0xb8);
          fVar15 = *pfVar9;
          fVar10 = pfVar9[1];
          fVar19 = pfVar9[2];
        }
        else {
          fVar10 = 0.0 / fVar19;
          fVar15 = -fVar15 / fVar19;
          fVar19 = -fVar17 / fVar19;
        }
        if (lVar7 == 0) goto LAB_0315f994;
        uVar12 = FUN_03929a40(fVar15,lVar7,0);
        unaff_x19[3] = uVar12;
        unaff_x19[4] = fVar10;
        unaff_x19[5] = fVar19;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar4 = false;
LAB_0315f70c:
    fVar10 = (float)FUN_0315efb8(fVar11);
    if (fVar10 <= fStack0000000000000004) {
      fVar10 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar4 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
    fVar17 = fVar21;
    uVar12 = FUN_03927438(uVar13,lVar7,0);
    *unaff_x19 = uVar12;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar17;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x24 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar17 = (float)uVar13;
      fVar19 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + 0.0);
      if (fVar19 <= unaff_s15) {
        if (*(char *)(unaff_x23 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x23 + 599) = 1;
        }
        pfVar9 = *(float **)(*unaff_x22 + 0xb8);
        fVar17 = *pfVar9;
        fVar10 = pfVar9[1];
        fVar21 = pfVar9[2];
      }
      else {
        fVar17 = fVar17 / fVar19;
        fVar10 = 0.0 / fVar19;
        fVar21 = fVar21 / fVar19;
      }
      if (lVar7 != 0) {
        uVar12 = FUN_03929a40(fVar17,lVar7,0);
        unaff_x19[3] = uVar12;
        unaff_x19[4] = fVar10;
        unaff_x19[5] = fVar21;
        fVar11 = fVar15;
LAB_0315f838:
        uVar12 = FUN_0315efb8(fVar11);
        unaff_x19[6] = uVar12;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


