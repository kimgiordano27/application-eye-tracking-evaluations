/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 0315f4e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  float *pfVar4;
  long in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float in_s5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar5 = ABS(in_s5);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 * *(float *)(in_x9 + 0x490);
  fVar10 = **(float **)(param_1 + 0xb8) * 8.0;
  if (fVar5 <= fVar10) {
    fVar5 = fVar10;
  }
  if (ABS(0.0 - in_s5) < fVar5) {
    return 0;
  }
  if (unaff_s11 <= unaff_s12) {
    if (unaff_w21 == 2) {
      return 0;
    }
  }
  else if ((unaff_s13 * -0.0 - fStack0000000000000010 * fStack0000000000000008) -
           fStack0000000000000014 * unaff_s14 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
  fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar5 = SQRT(fVar5 * fVar5 - unaff_s10 * unaff_s10);
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fVar12 = fStack0000000000000010 - (unaff_s15 - fStack0000000000000008 * fVar5);
  fVar11 = (unaff_s13 * fVar5 - unaff_s9) + 0.0;
  fVar10 = fStack0000000000000014 - (unaff_s8 - unaff_s14 * fVar5);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    cVar3 = DAT_03fed25e;
  }
  else {
    cVar3 = '\x01';
  }
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
  if (cVar3 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (unaff_s15 + fStack0000000000000008 * fVar5);
  fVar12 = 0.0 - (unaff_s9 + unaff_s13 * fVar5);
  fVar11 = SQRT(fVar11) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (unaff_s8 + unaff_s14 * fVar5);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fStack000000000000000c =
       SQRT(fStack0000000000000014 +
            fStack0000000000000010 * fStack0000000000000010 + fVar12 * fVar12) /
       fStack000000000000000c;
  uVar8 = FUN_038f7ac0(fVar11,&stack0x00000018,0);
  fVar5 = fVar10;
  fVar12 = fStack0000000000000014;
  uVar9 = FUN_038f7ac0(fStack000000000000000c,&stack0x00000018,0);
  if ((fStack0000000000000004 <= 0.0) ||
     (fVar6 = (float)FUN_0315efb8(fVar11), fVar6 <= fStack0000000000000004)) {
    fVar6 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = fVar6 <= 0.0 || ABS(fStack0000000000000014) <= fVar6 * 0.5;
    if (0.0 < fStack0000000000000004) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      if ((0.0 < fVar6) && (fVar6 * 0.5 < ABS(fVar12))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
        fVar10 = fVar5;
        uVar7 = FUN_03927438(uVar9,lVar2,0);
        *unaff_x19 = uVar7;
        unaff_x19[1] = fVar12;
        unaff_x19[2] = fVar10;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0315f994;
        lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0x25d) == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          *(undefined1 *)(unaff_x24 + 0x25d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar11 = (float)uVar9;
        fVar10 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + 0.0);
        if (fVar10 <= fStack0000000000000000) {
          if (*(char *)(unaff_x23 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x23 + 599) = 1;
          }
          pfVar4 = *(float **)(*unaff_x22 + 0xb8);
          fVar11 = *pfVar4;
          fVar12 = pfVar4[1];
          fVar10 = pfVar4[2];
        }
        else {
          fVar12 = 0.0 / fVar10;
          fVar11 = -fVar11 / fVar10;
          fVar10 = -fVar5 / fVar10;
        }
        if (lVar2 == 0) goto LAB_0315f994;
        uVar7 = FUN_03929a40(fVar11,lVar2,0);
        unaff_x19[3] = uVar7;
        unaff_x19[4] = fVar12;
        unaff_x19[5] = fVar10;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar1 = false;
LAB_0315f70c:
    fVar6 = (float)FUN_0315efb8(fStack000000000000000c);
    if (fVar6 <= fStack0000000000000004) {
      fVar6 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    fVar5 = fVar10;
    uVar7 = FUN_03927438(uVar8,lVar2,0);
    *unaff_x19 = uVar7;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar5;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x24 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar5 = (float)uVar8;
      fVar12 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + 0.0);
      if (fVar12 <= fStack0000000000000000) {
        if (*(char *)(unaff_x23 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x23 + 599) = 1;
        }
        pfVar4 = *(float **)(*unaff_x22 + 0xb8);
        fVar5 = *pfVar4;
        fVar6 = pfVar4[1];
        fVar10 = pfVar4[2];
      }
      else {
        fVar5 = fVar5 / fVar12;
        fVar6 = 0.0 / fVar12;
        fVar10 = fVar10 / fVar12;
      }
      if (lVar2 != 0) {
        uVar7 = FUN_03929a40(fVar5,lVar2,0);
        unaff_x19[3] = uVar7;
        unaff_x19[4] = fVar6;
        unaff_x19[5] = fVar10;
        fStack000000000000000c = fVar11;
LAB_0315f838:
        uVar7 = FUN_0315efb8(fStack000000000000000c);
        unaff_x19[6] = uVar7;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


