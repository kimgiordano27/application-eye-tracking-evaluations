/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 03138fb4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long lVar7;
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
  float unaff_s8;
  float unaff_s9;
  float fVar17;
  float unaff_s10;
  undefined4 uVar18;
  float unaff_s11;
  undefined4 uVar19;
  float unaff_s12;
  float fVar20;
  float fVar21;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x438));
  *(undefined1 *)(unaff_x20 + 0x25d) = 1;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar10 = SQRT(unaff_s12);
  if (fVar10 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar17 = *pfVar5;
    fVar20 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar17 = unaff_s9 / fVar10;
    fVar20 = unaff_s10 / fVar10;
    fVar10 = unaff_s11 / fVar10;
  }
  if (*(int *)(unaff_x19 + 0x48) == 1) {
    if (DAT_03fed25f == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25f = '\x01';
    }
    lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    pfVar5 = (float *)(lVar7 + 0x3c);
    puVar6 = (undefined4 *)(lVar7 + 0x40);
    puVar8 = (undefined4 *)(lVar7 + 0x44);
  }
  else {
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    pfVar5 = (float *)(lVar7 + 0x18);
    puVar6 = (undefined4 *)(lVar7 + 0x1c);
    puVar8 = (undefined4 *)(lVar7 + 0x20);
  }
  uVar18 = *puVar8;
  uVar19 = *puVar6;
  fVar21 = *pfVar5;
  lVar7 = FUN_0391c27c();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x40),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) && (lVar2 != 0)) {
      fVar11 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x20);
      fVar16 = 0.0;
      fVar14 = fVar10 * fVar11 + 0.0;
      fVar12 = unaff_s8 + fVar20 * fVar11;
      FUN_03927438(fVar17 * fVar11 + 0.0,fVar12,fVar14,lVar2,0);
      if (lVar7 != 0) {
        FUN_03928dd4(lVar7,0);
        lVar7 = FUN_0391c27c();
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
          fVar11 = (float)FUN_039274a0(lVar2,0);
          fVar17 = (float)FUN_03914800(fVar17,fVar20,fVar10,fVar21,uVar19,uVar18,0);
          puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          if (lVar7 != 0) {
            fVar15 = (fVar11 * fVar20 + fVar16 * fVar10 + fVar14 * fVar21) - fVar12 * fVar17;
            fVar13 = (fVar14 * fVar17 + fVar16 * fVar20 + fVar12 * fVar21) - fVar11 * fVar10;
            FUN_03928f54((fVar12 * fVar10 + fVar16 * fVar17 + fVar11 * fVar21) - fVar14 * fVar20,
                         fVar13,fVar15,
                         ((fVar16 * fVar21 - fVar11 * fVar17) - fVar12 * fVar20) - fVar14 * fVar10,
                         lVar7,0);
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
              lVar7 = *(long *)puVar1;
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar7);
              }
              uVar3 = FUN_0391f968(uVar9,uVar4,0);
              if ((uVar3 & 1) == 0) {
                return;
              }
              lVar7 = FUN_0391c27c();
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (uVar9 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar7 != 0)) {
                uVar3 = FUN_0392a890(lVar7,uVar9,0);
                if ((uVar3 & 1) != 0) {
                  return;
                }
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  lVar7 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                  lVar2 = FUN_0391c27c();
                  if ((lVar2 != 0) && (FUN_03928d34(lVar2,0), lVar7 != 0)) {
                    FUN_03928dd4(lVar7,0);
                    if (*(long *)(unaff_x19 + 0x30) != 0) {
                      lVar7 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                      lVar2 = FUN_0391c27c();
                      if ((lVar2 != 0) && (FUN_039274a0(lVar2,0), lVar7 != 0)) {
                        FUN_03928f54(lVar7,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar7 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar7 != 0)) {
                          fVar10 = (float)FUN_03929354(lVar7,0);
                          lVar2 = FUN_0391c27c();
                          if (lVar2 != 0) {
                            fVar20 = (float)FUN_0392a7f0(lVar2,0);
                            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                               (lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
                              fVar17 = (float)FUN_0392a7f0(lVar2,0);
                              fVar20 = fVar20 / fVar17;
                              FUN_039293f4(fVar10 * fVar20,fVar13 * fVar20,fVar15 * fVar20,lVar7,0);
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


