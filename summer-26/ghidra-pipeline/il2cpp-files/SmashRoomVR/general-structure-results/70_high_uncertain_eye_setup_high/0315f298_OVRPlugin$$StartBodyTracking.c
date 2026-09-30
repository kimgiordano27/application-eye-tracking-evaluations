/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 0315f298
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StartBodyTracking(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
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
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s11;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float fVar23;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  *(undefined1 *)(unaff_x24 + 0x25d) = 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar10 = SQRT(unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10);
  fStack000000000000000c = unaff_s13;
  if (fVar10 <= unaff_s15) {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar23 = pfVar9[1];
    fVar10 = pfVar9[2];
  }
  else {
    fVar17 = unaff_s8 / fVar10;
    fVar23 = unaff_s10 / fVar10;
    fVar10 = unaff_s9 / fVar10;
  }
  if (DAT_03fed5da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed5da = '\x01';
  }
  puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  fVar11 = fVar10 * fVar10 + fVar17 * fVar17 + fVar23 * fVar23;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar11) {
    fVar20 = (fVar23 * -0.0 - unaff_s12 * fVar17) - unaff_s11 * fVar10;
    fVar18 = (fVar17 * fVar20) / fVar11;
    fVar19 = (fVar23 * fVar20) / fVar11;
    fVar11 = (fVar10 * fVar20) / fVar11;
  }
  else {
    if (*(char *)(unaff_x23 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x23 + 599) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar18 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar11 = pfVar9[2];
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
  fVar18 = unaff_s12 + fVar18;
  fVar19 = fVar19 + 0.0;
  fVar22 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar11 = unaff_s11 + fVar11;
  fVar21 = SQRT(unaff_s12 * unaff_s12 + 0.0 + unaff_s11 * unaff_s11);
  fVar20 = SQRT(fVar11 * fVar11 + fVar18 * fVar18 + fVar19 * fVar19);
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
  if (fVar22 < fVar20) {
    return 0;
  }
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar12 = ABS(fStack000000000000000c);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar16 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
  fVar2 = fVar12 * DAT_00b55490;
  if (fVar12 * DAT_00b55490 <= fVar16) {
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
  else if ((fVar23 * -0.0 - fStack0000000000000010 * fVar17) - fStack0000000000000014 * fVar10 < 0.0
          ) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  fVar21 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar20 = SQRT(fVar21 * fVar21 - fVar20 * fVar20);
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar12 = fStack0000000000000010 - (fVar18 - fVar17 * fVar20);
  fVar22 = (fVar23 * fVar20 - fVar19) + 0.0;
  fVar21 = fStack0000000000000014 - (fVar11 - fVar10 * fVar20);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    cVar8 = DAT_03fed25e;
  }
  else {
    cVar8 = '\x01';
  }
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar21 + fVar12 * fVar12 + fVar22 * fVar22;
  if (cVar8 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (fVar18 + fVar17 * fVar20);
  fVar17 = 0.0 - (fVar19 + fVar23 * fVar20);
  fVar23 = SQRT(fVar22) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (fVar11 + fVar10 * fVar20);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fVar10 = SQRT(fStack0000000000000014 +
                fStack0000000000000010 * fStack0000000000000010 + fVar17 * fVar17) /
           fStack000000000000000c;
  uVar14 = FUN_038f7ac0(fVar23,&stack0x00000018,0);
  fVar17 = fVar21;
  fVar11 = fStack0000000000000014;
  uVar15 = FUN_038f7ac0(fVar10,&stack0x00000018,0);
  if ((in_stack_00000000._4_4_ <= 0.0) ||
     (fVar20 = (float)FUN_0315efb8(fVar23), fVar20 <= in_stack_00000000._4_4_)) {
    fVar20 = *(float *)(unaff_x20 + 0x2c);
    bVar4 = fVar20 <= 0.0 || ABS(fStack0000000000000014) <= fVar20 * 0.5;
    if (0.0 < in_stack_00000000._4_4_) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar4 & iVar1 != 1)) {
      if ((0.0 < fVar20) && (fVar20 * 0.5 < ABS(fVar11))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
        fVar23 = fVar17;
        uVar13 = FUN_03927438(uVar15,lVar7,0);
        *unaff_x19 = uVar13;
        unaff_x19[1] = fVar11;
        unaff_x19[2] = fVar23;
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
        fVar11 = (float)uVar15;
        fVar23 = SQRT(fVar17 * fVar17 + fVar11 * fVar11 + 0.0);
        if (fVar23 <= unaff_s15) {
          if (*(char *)(unaff_x23 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x23 + 599) = 1;
          }
          pfVar9 = *(float **)(*unaff_x22 + 0xb8);
          fVar11 = *pfVar9;
          fVar20 = pfVar9[1];
          fVar23 = pfVar9[2];
        }
        else {
          fVar20 = 0.0 / fVar23;
          fVar11 = -fVar11 / fVar23;
          fVar23 = -fVar17 / fVar23;
        }
        if (lVar7 == 0) goto LAB_0315f994;
        uVar13 = FUN_03929a40(fVar11,lVar7,0);
        unaff_x19[3] = uVar13;
        unaff_x19[4] = fVar20;
        unaff_x19[5] = fVar23;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar4 = false;
LAB_0315f70c:
    fVar20 = (float)FUN_0315efb8(fVar10);
    if (fVar20 <= in_stack_00000000._4_4_) {
      fVar20 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar4 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
    fVar10 = fVar21;
    uVar13 = FUN_03927438(uVar14,lVar7,0);
    *unaff_x19 = uVar13;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar10;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar7 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x24 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar10 = (float)uVar14;
      fVar17 = SQRT(fVar21 * fVar21 + fVar10 * fVar10 + 0.0);
      if (fVar17 <= unaff_s15) {
        if (*(char *)(unaff_x23 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x23 + 599) = 1;
        }
        pfVar9 = *(float **)(*unaff_x22 + 0xb8);
        fVar10 = *pfVar9;
        fVar11 = pfVar9[1];
        fVar21 = pfVar9[2];
      }
      else {
        fVar10 = fVar10 / fVar17;
        fVar11 = 0.0 / fVar17;
        fVar21 = fVar21 / fVar17;
      }
      if (lVar7 != 0) {
        uVar13 = FUN_03929a40(fVar10,lVar7,0);
        unaff_x19[3] = uVar13;
        unaff_x19[4] = fVar11;
        unaff_x19[5] = fVar21;
        fVar10 = fVar23;
LAB_0315f838:
        uVar13 = FUN_0315efb8(fVar10);
        unaff_x19[6] = uVar13;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


