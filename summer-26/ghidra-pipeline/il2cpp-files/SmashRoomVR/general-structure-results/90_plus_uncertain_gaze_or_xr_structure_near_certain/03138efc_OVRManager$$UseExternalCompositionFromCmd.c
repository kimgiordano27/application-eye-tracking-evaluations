/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 03138efc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__UseExternalCompositionFromCmd(float param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float unaff_s9;
  float fVar18;
  float unaff_s10;
  undefined4 uVar19;
  undefined4 uVar20;
  
  param_1 = param_3 * param_3 + param_1;
  if (in_w8 == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    *(undefined1 *)(unaff_x20 + 0x263) = 1;
  }
  fVar11 = ABS(param_1);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar12 = **(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) *
           8.0;
  fVar18 = fVar11 * DAT_00b55490;
  if (fVar11 * DAT_00b55490 <= fVar12) {
    fVar18 = fVar12;
  }
  if (fVar18 <= ABS(0.0 - param_1)) {
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    param_1 = SQRT(param_1);
    if (param_1 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar18 = *pfVar6;
      fVar11 = pfVar6[1];
      param_3 = pfVar6[2];
    }
    else {
      fVar18 = unaff_s9 / param_1;
      fVar11 = unaff_s10 / param_1;
      param_3 = param_3 / param_1;
    }
  }
  else {
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar18 = *(float *)(lVar5 + 0x48);
    fVar11 = *(float *)(lVar5 + 0x4c);
    param_3 = *(float *)(lVar5 + 0x50);
  }
  if (*(int *)(unaff_x19 + 0x48) == 1) {
    if (DAT_03fed25f == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25f = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    pfVar6 = (float *)(lVar5 + 0x3c);
    puVar7 = (undefined4 *)(lVar5 + 0x40);
    puVar8 = (undefined4 *)(lVar5 + 0x44);
  }
  else {
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    pfVar6 = (float *)(lVar5 + 0x18);
    puVar7 = (undefined4 *)(lVar5 + 0x1c);
    puVar8 = (undefined4 *)(lVar5 + 0x20);
  }
  uVar19 = *puVar8;
  uVar20 = *puVar7;
  fVar12 = *pfVar6;
  lVar5 = FUN_0391c27c();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x40),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) && (lVar2 != 0)) {
      fVar10 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x20);
      fVar17 = 0.0;
      fVar15 = param_3 * fVar10 + 0.0;
      fVar13 = unaff_s8 + fVar11 * fVar10;
      FUN_03927438(fVar18 * fVar10 + 0.0,fVar13,fVar15,lVar2,0);
      if (lVar5 != 0) {
        FUN_03928dd4(lVar5,0);
        lVar5 = FUN_0391c27c();
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
          fVar10 = (float)FUN_039274a0(lVar2,0);
          fVar18 = (float)FUN_03914800(fVar18,fVar11,param_3,fVar12,uVar20,uVar19,0);
          puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          if (lVar5 != 0) {
            fVar16 = (fVar10 * fVar11 + fVar17 * param_3 + fVar15 * fVar12) - fVar13 * fVar18;
            fVar14 = (fVar15 * fVar18 + fVar17 * fVar11 + fVar13 * fVar12) - fVar10 * param_3;
            FUN_03928f54((fVar13 * param_3 + fVar17 * fVar18 + fVar10 * fVar12) - fVar15 * fVar11,
                         fVar14,fVar16,
                         ((fVar17 * fVar12 - fVar10 * fVar18) - fVar13 * fVar11) - fVar15 * param_3,
                         lVar5,0);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar3 = FUN_0391f968(uVar9,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              uVar9 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
              uVar4 = FUN_0391c27c();
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar5);
              }
              uVar3 = FUN_0391f968(uVar9,uVar4,0);
              if ((uVar3 & 1) == 0) {
                return;
              }
              lVar5 = FUN_0391c27c();
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (uVar9 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar5 != 0)) {
                uVar3 = FUN_0392a890(lVar5,uVar9,0);
                if ((uVar3 & 1) != 0) {
                  return;
                }
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  lVar5 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                  lVar2 = FUN_0391c27c();
                  if ((lVar2 != 0) && (FUN_03928d34(lVar2,0), lVar5 != 0)) {
                    FUN_03928dd4(lVar5,0);
                    if (*(long *)(unaff_x19 + 0x30) != 0) {
                      lVar5 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                      lVar2 = FUN_0391c27c();
                      if ((lVar2 != 0) && (FUN_039274a0(lVar2,0), lVar5 != 0)) {
                        FUN_03928f54(lVar5,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar5 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar5 != 0)) {
                          fVar11 = (float)FUN_03929354(lVar5,0);
                          lVar2 = FUN_0391c27c();
                          if (lVar2 != 0) {
                            fVar18 = (float)FUN_0392a7f0(lVar2,0);
                            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                               (lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
                              fVar12 = (float)FUN_0392a7f0(lVar2,0);
                              fVar18 = fVar18 / fVar12;
                              FUN_039293f4(fVar11 * fVar18,fVar14 * fVar18,fVar16 * fVar18,lVar5,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


