/*
FUNCTION_NAME: FUN_02dd6d08
ENTRY_POINT: 02dd6d08
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined8 FUN_02dd6d08(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03feff30 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feff30 = 1;
  }
  lVar6 = *(long *)(param_4 + 0x28);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_02dd7180;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_02dd7180;
    *(undefined1 *)(lVar3 + 0x1bb) = 0;
    if (*(long *)(lVar3 + 0xa8) == 0) goto LAB_02dd7180;
    FUN_0395a294(*(long *)(lVar3 + 0xa8),0,0);
    *(undefined4 *)(param_4 + 0x30) = 0;
    if (lVar6 == 0) goto LAB_02dd7180;
    fVar8 = (float)FUN_02dd6a14(lVar6);
    fVar11 = *(float *)(lVar6 + 0x1d4);
    *(float *)(param_4 + 0x34) = *(float *)(lVar6 + 0x1cc) / fVar11;
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (fVar10 = param_3, lVar3 = FUN_0391c27c(*(long *)(param_4 + 0x20),0), lVar3 == 0))
    goto LAB_02dd7180;
    fVar9 = (float)FUN_03928d34(lVar3,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar12 = SQRT(param_3 * param_3 + fVar8 * fVar8 + param_2 * param_2);
    if (fVar12 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar8 = *pfVar4;
      param_2 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar8 = fVar8 / fVar12;
      param_2 = param_2 / fVar12;
      param_3 = param_3 / fVar12;
    }
    fVar12 = *(float *)(lVar6 + 0x1cc);
    param_3 = fVar10 + param_3 * fVar12;
    *(float *)(param_4 + 0x38) = fVar9 + fVar8 * fVar12;
    *(float *)(param_4 + 0x3c) = fVar11 + param_2 * fVar12;
    *(float *)(param_4 + 0x40) = param_3;
  }
  fVar8 = *(float *)(lVar6 + 0x1d4);
  if (*(float *)(param_4 + 0x30) < fVar8) {
    uVar7 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar7,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x20) != 0) {
        lVar6 = FUN_0391c27c(*(long *)(param_4 + 0x20),0);
        if ((*(long *)(param_4 + 0x20) != 0) &&
           (lVar3 = FUN_0391c27c(*(long *)(param_4 + 0x20),0), lVar3 != 0)) {
          fVar11 = (float)FUN_03928d34(lVar3,0);
          fVar10 = *(float *)(param_4 + 0x34);
          fVar17 = *(float *)(param_4 + 0x38);
          fVar12 = *(float *)(param_4 + 0x3c);
          fVar15 = *(float *)(param_4 + 0x40);
          fVar9 = (float)FUN_03925cf4(0);
          if (DAT_03fed51c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed51c = '\x01';
          }
          fVar14 = fVar17 - fVar11;
          fVar13 = fVar12 - fVar8;
          fVar18 = fVar15 - param_3;
          fVar16 = fVar18 * fVar18 + fVar14 * fVar14 + fVar13 * fVar13;
          if ((fVar16 != 0.0) &&
             ((fVar10 = fVar10 * fVar9, fVar10 < 0.0 || (fVar10 * fVar10 < fVar16)))) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar16 = SQRT(fVar16);
            fVar17 = fVar11 + fVar10 * (fVar14 / fVar16);
            fVar12 = fVar8 + fVar10 * (fVar13 / fVar16);
            fVar15 = param_3 + fVar10 * (fVar18 / fVar16);
          }
          if (lVar6 != 0) {
            FUN_03928dd4(fVar17,fVar12,fVar15,lVar6,0);
            if (*(long *)(param_4 + 0x20) != 0) {
              lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xa8);
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
              if (lVar6 != 0) {
                puVar5 = *(undefined4 **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                FUN_03959ef0(*puVar5,puVar5[1],puVar5[2],lVar6,0);
                if (*(long *)(param_4 + 0x20) != 0) {
                  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xa8);
                  if (DAT_03fed257 == '\0') {
                    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                    DAT_03fed257 = '\x01';
                  }
                  if (lVar6 != 0) {
                    puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                    FUN_0395a028(*puVar5,puVar5[1],puVar5[2],lVar6,0);
                    fVar11 = *(float *)(param_4 + 0x30);
                    fVar8 = (float)FUN_03925cf4(0);
                    *(float *)(param_4 + 0x30) = fVar11 + fVar8;
                    *(undefined8 *)(param_4 + 0x18) = 0;
                    thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),0);
                    *(undefined4 *)(param_4 + 0x10) = 1;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_02dd7180;
    }
  }
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar7,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xa8), lVar6 != 0)) {
    FUN_0395a294(lVar6,1,0);
    if (*(long *)(param_4 + 0x20) != 0) {
      *(undefined1 *)(*(long *)(param_4 + 0x20) + 0x1bb) = 1;
      return 0;
    }
  }
LAB_02dd7180:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


