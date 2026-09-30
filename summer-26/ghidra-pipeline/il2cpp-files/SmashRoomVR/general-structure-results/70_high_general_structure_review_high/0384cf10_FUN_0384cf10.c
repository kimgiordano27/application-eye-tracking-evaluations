/*
FUNCTION_NAME: FUN_0384cf10
ENTRY_POINT: 0384cf10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_0384cf10(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar9 = param_2;
  fVar10 = param_3;
  if ((DAT_03ff85d8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03ff85d8 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_0384d204;
  lVar3 = *(long *)(*(long *)(param_4 + 0x30) + 0x30);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x38);
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    FUN_0384d208(param_4);
    uVar5 = *(undefined8 *)(param_4 + 0x50);
    fVar13 = 0.0;
    if (*(char *)(param_4 + 0x48) != '\0') {
      fVar13 = param_1;
    }
    fVar12 = 0.0;
    if (*(char *)(param_4 + 0x49) != '\0') {
      fVar12 = param_2;
    }
    fVar11 = 0.0;
    if (*(char *)(param_4 + 0x4a) != '\0') {
      fVar11 = param_3;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x50) == 0) goto LAB_0384d204;
      uVar2 = FUN_0395b350(*(long *)(param_4 + 0x50),0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_4 + 0x50) != 0) {
          uVar2 = FUN_0395ba3c(*(long *)(param_4 + 0x50),0);
          if (((uVar2 & 1) == 0) && (*(char *)(param_4 + 0x4b) != '\0')) {
            fVar6 = *(float *)(param_4 + 0x5c);
            fVar15 = *(float *)(param_4 + 0x60);
            fVar14 = *(float *)(param_4 + 100);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar7 = (float)FUN_03954ef8(0);
            fVar8 = (float)FUN_03925cf4(0);
            fVar6 = fVar6 + fVar7 * fVar8;
            fVar15 = fVar15 + fVar9 * fVar8;
            fVar14 = fVar14 + fVar10 * fVar8;
            *(float *)(param_4 + 0x5c) = fVar6;
            *(float *)(param_4 + 0x60) = fVar15;
            *(float *)(param_4 + 100) = fVar14;
            if (*(char *)(param_4 + 0x48) != '\0') {
              fVar6 = 0.0;
              *(undefined4 *)(param_4 + 0x5c) = 0;
            }
            if (*(char *)(param_4 + 0x49) != '\0') {
              fVar15 = 0.0;
              *(undefined4 *)(param_4 + 0x60) = 0;
            }
            if (*(char *)(param_4 + 0x4a) != '\0') {
              fVar14 = 0.0;
              *(undefined4 *)(param_4 + 100) = 0;
            }
          }
          else {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fVar6 = *pfVar4;
            fVar15 = pfVar4[1];
            fVar14 = pfVar4[2];
            *(float *)(param_4 + 0x5c) = fVar6;
            *(float *)(param_4 + 0x60) = fVar15;
            *(float *)(param_4 + 100) = fVar14;
          }
          fVar9 = (float)FUN_03925cf4(0);
          uVar2 = FUN_0384d370(param_4);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar2 = FUN_0384c5f8(param_4);
          if ((uVar2 & 1) == 0) {
            return;
          }
          *(undefined1 *)(param_4 + 0x59) = 1;
          if (*(long *)(param_4 + 0x50) == 0) goto LAB_0384d204;
          FUN_0395b9a4(fVar13 + fVar6 * fVar9,fVar12 + fVar15 * fVar9,fVar11 + fVar14 * fVar9,
                       *(long *)(param_4 + 0x50),0);
          goto LAB_0384d1c0;
        }
        goto LAB_0384d204;
      }
    }
    uVar2 = FUN_0384d370(param_4);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_0384c5f8(param_4), (uVar2 & 1) != 0)) {
      *(undefined1 *)(param_4 + 0x59) = 1;
      if ((lVar3 != 0) && (lVar3 = FUN_0391fab4(lVar3,0), lVar3 != 0)) {
        fVar6 = (float)FUN_03928d34(lVar3,0);
        FUN_03928dd4(fVar13 + fVar6,fVar12 + fVar9,fVar11 + fVar10,lVar3,0);
LAB_0384d1c0:
        FUN_0384ca1c(param_4);
        return;
      }
LAB_0384d204:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


