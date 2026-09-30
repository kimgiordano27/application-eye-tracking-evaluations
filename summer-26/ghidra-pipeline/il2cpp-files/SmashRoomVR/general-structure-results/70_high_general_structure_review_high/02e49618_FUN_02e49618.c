/*
FUNCTION_NAME: FUN_02e49618
ENTRY_POINT: 02e49618
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_3
*/


void FUN_02e49618(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_03ff02c8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03ff02c8 = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  if (*(char *)(param_4 + 0x6c) == '\0') {
    return;
  }
  if (*(char *)(param_4 + 0x88) == '\0') {
    return;
  }
  lVar4 = FUN_0391c27c(param_4,0);
  if (lVar4 != 0) {
    fVar9 = (float)FUN_03928d34(lVar4,0);
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_02e49978;
    fVar12 = param_3;
    fVar16 = param_2;
    fVar10 = (float)FUN_03928d34(*(long *)(param_4 + 0x60),0);
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar15 = *(float *)(param_4 + 0x68);
    fVar9 = SQRT((param_3 - fVar12) * (param_3 - fVar12) +
                 (fVar9 - fVar10) * (fVar9 - fVar10) + (param_2 - fVar16) * (param_2 - fVar16));
    if (fVar9 <= fVar15) {
      uVar5 = (ulong)(uint)*(float *)(param_4 + 0x74);
      if (fVar9 < *(float *)(param_4 + 0x74)) {
        lVar4 = *(long *)(param_4 + 0x80);
        if (lVar4 == 0) goto LAB_02e49978;
        uVar3 = 1;
        goto FUN_02e49944;
      }
      lVar4 = FUN_0391c27c(param_4,0);
      if (lVar4 == 0) goto LAB_02e49978;
      uVar13 = FUN_03928d34(lVar4,0);
      if (*(long *)(param_4 + 0x60) == 0) goto LAB_02e49978;
      uVar14 = uVar5;
      fVar9 = fVar15;
      fVar10 = (float)FUN_03928d34(*(long *)(param_4 + 0x60),0);
      fVar12 = fVar9;
      fVar16 = (float)uVar14;
      lVar4 = FUN_0391c27c(param_4,0);
      if (lVar4 == 0) goto LAB_02e49978;
      fVar11 = (float)FUN_03928d34(lVar4,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      fVar10 = fVar10 - fVar11;
      fVar16 = (float)uVar14 - fVar16;
      fVar9 = fVar9 - fVar12;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar16 * fVar16);
      if (fVar12 <= DAT_00b55370) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar10 = *pfVar8;
        fVar16 = pfVar8[1];
        fVar9 = pfVar8[2];
      }
      else {
        fVar10 = fVar10 / fVar12;
        fVar16 = fVar16 / fVar12;
        fVar9 = fVar9 / fVar12;
      }
      uVar17 = *(undefined4 *)(param_4 + 0x68);
      uVar2 = FUN_03920150(*(undefined4 *)(param_4 + 0x70),0);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
      }
      uVar5 = FUN_039558d0(uVar13,uVar5,fVar15,fVar10,fVar16,fVar9,uVar17,&local_90,uVar2,1,0);
      lVar4 = *(long *)(param_4 + 0x80);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_03959ba8(&local_90,0);
        if (lVar6 != 0) {
          uVar13 = FUN_0391c2b8(lVar6,0);
          if ((*(long *)(param_4 + 0x60) != 0) &&
             (lVar6 = FUN_0391c27c(*(long *)(param_4 + 0x60),0), lVar6 != 0)) {
            uVar7 = FUN_0391c2b8(lVar6,0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar3 = FUN_03922f24(uVar13,uVar7,0);
            if (lVar4 != 0) {
              uVar3 = uVar3 & 1;
              goto FUN_02e49944;
            }
          }
        }
        goto LAB_02e49978;
      }
    }
    else {
      lVar4 = *(long *)(param_4 + 0x80);
    }
    if (lVar4 != 0) {
      uVar3 = 0;
FUN_02e49944:
      FUN_038fe3fc(lVar4,uVar3,0);
      return;
    }
  }
LAB_02e49978:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


