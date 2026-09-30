/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 0315f6c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHmdColorDesc(void)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000000;
  undefined8 in_stack_00000010;
  
  fVar4 = (float)FUN_0315efb8();
  if (fVar4 <= unaff_s8) {
    fVar4 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = fVar4 <= 0.0 || ABS(unaff_s14) <= fVar4 * 0.5;
    if (0.0 < unaff_s8) goto LAB_0315f70c;
LAB_0315f738:
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      if ((0.0 < fVar4) && (fVar4 * 0.5 < ABS(unaff_s13))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
        fVar4 = in_stack_00000010._4_4_;
        uVar5 = FUN_03927438(lVar2,0);
        *unaff_x19 = uVar5;
        unaff_x19[1] = unaff_s13;
        unaff_x19[2] = fVar4;
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
        fVar4 = SQRT(in_stack_00000010._4_4_ * in_stack_00000010._4_4_ + unaff_s15 * unaff_s15 + 0.0
                    );
        if (fVar4 <= in_stack_00000000) {
          if (*(char *)(unaff_x23 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x23 + 599) = 1;
          }
          pfVar3 = *(float **)(*unaff_x22 + 0xb8);
          fVar6 = *pfVar3;
          fVar7 = pfVar3[1];
          fVar4 = pfVar3[2];
        }
        else {
          fVar7 = 0.0 / fVar4;
          fVar6 = -unaff_s15 / fVar4;
          fVar4 = -in_stack_00000010._4_4_ / fVar4;
        }
        if (lVar2 == 0) goto LAB_0315f994;
        uVar5 = FUN_03929a40(fVar6,lVar2,0);
        unaff_x19[3] = uVar5;
        unaff_x19[4] = fVar7;
        unaff_x19[5] = fVar4;
        goto LAB_0315f838;
      }
      goto LAB_0315f994;
    }
  }
  else {
    bVar1 = false;
LAB_0315f70c:
    fVar4 = (float)FUN_0315efb8();
    if (fVar4 <= unaff_s8) {
      fVar4 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0315f738;
    }
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    fVar4 = unaff_s12;
    uVar5 = FUN_03927438(lVar2,0);
    *unaff_x19 = uVar5;
    unaff_x19[1] = unaff_s14;
    unaff_x19[2] = fVar4;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x24 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar4 = SQRT(unaff_s12 * unaff_s12 + unaff_s10 * unaff_s10 + 0.0);
      if (fVar4 <= in_stack_00000000) {
        if (*(char *)(unaff_x23 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x23 + 599) = 1;
        }
        pfVar3 = *(float **)(*unaff_x22 + 0xb8);
        fVar6 = *pfVar3;
        fVar7 = pfVar3[1];
        fVar4 = pfVar3[2];
      }
      else {
        fVar6 = unaff_s10 / fVar4;
        fVar7 = 0.0 / fVar4;
        fVar4 = unaff_s12 / fVar4;
      }
      if (lVar2 != 0) {
        uVar5 = FUN_03929a40(fVar6,lVar2,0);
        unaff_x19[3] = uVar5;
        unaff_x19[4] = fVar7;
        unaff_x19[5] = fVar4;
LAB_0315f838:
        uVar5 = FUN_0315efb8();
        unaff_x19[6] = uVar5;
        return 1;
      }
    }
  }
LAB_0315f994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


