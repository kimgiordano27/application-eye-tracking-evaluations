/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 0315f358
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StopBodyTracking(float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  float *pfVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s11;
  float fVar17;
  float unaff_s12;
  float fVar18;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  if (*param_1 <= param_2) {
    fVar16 = (unaff_s13 * -0.0 - unaff_s12 * unaff_s8) - unaff_s11 * unaff_s14;
    fVar14 = (unaff_s8 * fVar16) / param_2;
    fVar15 = (unaff_s13 * fVar16) / param_2;
    param_2 = (unaff_s14 * fVar16) / param_2;
  }
  else {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar14 = *pfVar8;
    fVar15 = pfVar8[1];
    param_2 = pfVar8[2];
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
  fVar14 = unaff_s12 + fVar14;
  fVar15 = fVar15 + 0.0;
  fVar18 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  param_2 = unaff_s11 + param_2;
  fVar17 = SQRT(unaff_s12 * unaff_s12 + 0.0 + unaff_s11 * unaff_s11);
  fVar16 = SQRT(param_2 * param_2 + fVar14 * fVar14 + fVar15 * fVar15);
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (iVar1 == 0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar17) && !NAN(fVar18)) {
      bVar3 = fVar17 < fVar18;
      bVar4 = fVar17 == fVar18;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    iVar1 = 1;
  }
  if (fVar18 < fVar16) {
    return 0;
  }
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar9 = ABS(fStack000000000000000c);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar13 = **(float **)(*unaff_x26 + 0xb8) * 8.0;
  fVar2 = fVar9 * DAT_00b55490;
  if (fVar9 * DAT_00b55490 <= fVar13) {
    fVar2 = fVar13;
  }
  if (ABS(0.0 - fStack000000000000000c) < fVar2) {
    return 0;
  }
  if (fVar17 <= fVar18) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((unaff_s13 * -0.0 - fStack0000000000000010 * fStack0000000000000008) -
           fStack0000000000000014 * unaff_s14 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  fVar17 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar16 = SQRT(fVar17 * fVar17 - fVar16 * fVar16);
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar9 = fStack0000000000000010 - (fVar14 - fStack0000000000000008 * fVar16);
  fVar18 = (unaff_s13 * fVar16 - fVar15) + 0.0;
  fVar17 = fStack0000000000000014 - (param_2 - unaff_s14 * fVar16);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    cVar7 = DAT_03fed25e;
  }
  else {
    cVar7 = '\x01';
  }
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar17 + fVar9 * fVar9 + fVar18 * fVar18;
  if (cVar7 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (fVar14 + fStack0000000000000008 * fVar16);
  fVar14 = 0.0 - (fVar15 + unaff_s13 * fVar16);
  fVar15 = SQRT(fVar18) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (param_2 + unaff_s14 * fVar16);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fStack000000000000000c =
       SQRT(fStack0000000000000014 +
            fStack0000000000000010 * fStack0000000000000010 + fVar14 * fVar14) /
       fStack000000000000000c;
  uVar11 = FUN_038f7ac0(fVar15,&stack0x00000018,0);
  fVar16 = fVar17;
  fVar14 = fStack0000000000000014;
  uVar12 = FUN_038f7ac0(fStack000000000000000c,&stack0x00000018,0);
  if ((in_stack_00000000._4_4_ <= 0.0) ||
     (fVar18 = (float)FUN_0315efb8(fVar15), fVar18 <= in_stack_00000000._4_4_)) {
    fVar18 = *(float *)(unaff_x20 + 0x2c);
    bVar3 = fVar18 <= 0.0 || ABS(fStack0000000000000014) <= fVar18 * 0.5;
    if (0.0 < in_stack_00000000._4_4_) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar3 & iVar1 != 1)) {
      if ((0.0 < fVar18) && (fVar18 * 0.5 < ABS(fVar14))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar6 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar6 != 0)) {
        fVar15 = fVar16;
        uVar10 = FUN_03927438(uVar12,lVar6,0);
        *unaff_x19 = uVar10;
        unaff_x19[1] = fVar14;
        unaff_x19[2] = fVar15;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
        lVar6 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0x25d) == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          *(undefined1 *)(unaff_x24 + 0x25d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar15 = (float)uVar12;
        fVar14 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + 0.0);
        if (fVar14 <= unaff_s15) {
          if (*(char *)(unaff_x23 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x23 + 599) = 1;
          }
          pfVar8 = *(float **)(*unaff_x22 + 0xb8);
          fVar15 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar14 = pfVar8[2];
        }
        else {
          fVar17 = 0.0 / fVar14;
          fVar15 = -fVar15 / fVar14;
          fVar14 = -fVar16 / fVar14;
        }
        if (lVar6 == 0) goto LAB_0315f994;
        uVar10 = FUN_03929a40(fVar15,lVar6,0);
        unaff_x19[3] = uVar10;
        unaff_x19[4] = fVar17;
        unaff_x19[5] = fVar14;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar3 = false;
LAB_0315f70c:
    fVar18 = (float)FUN_0315efb8(fStack000000000000000c);
    if (fVar18 <= in_stack_00000000._4_4_) {
      fVar18 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar3 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar6 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar6 != 0)) {
    fVar16 = fVar17;
    uVar10 = FUN_03927438(uVar11,lVar6,0);
    *unaff_x19 = uVar10;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar16;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar6 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x24 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar16 = (float)uVar11;
      fVar14 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + 0.0);
      if (fVar14 <= unaff_s15) {
        if (*(char *)(unaff_x23 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x23 + 599) = 1;
        }
        pfVar8 = *(float **)(*unaff_x22 + 0xb8);
        fVar16 = *pfVar8;
        fVar18 = pfVar8[1];
        fVar17 = pfVar8[2];
      }
      else {
        fVar16 = fVar16 / fVar14;
        fVar18 = 0.0 / fVar14;
        fVar17 = fVar17 / fVar14;
      }
      if (lVar6 != 0) {
        uVar10 = FUN_03929a40(fVar16,lVar6,0);
        unaff_x19[3] = uVar10;
        unaff_x19[4] = fVar18;
        unaff_x19[5] = fVar17;
        fStack000000000000000c = fVar15;
LAB_0315f838:
        uVar10 = FUN_0315efb8(fStack000000000000000c);
        unaff_x19[6] = uVar10;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


